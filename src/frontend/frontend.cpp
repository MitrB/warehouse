#include "frontend.hpp"

#include "raylib.h"

namespace Warehouse {

Frontend::Frontend() { init(); }

Frontend::~Frontend() {}

void Frontend::init() { draw(); }

void Frontend::draw() {
    const int screenWidth = 600;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Warehouse");

    Camera3D camera = {0};
    camera.position = (Vector3){10.0f, 10.0f, 10.0f};
    camera.target = (Vector3){0.0f, 0.0f, 0.0f};
    camera.up = (Vector3){0.0f, 1.0f, 0.0f};
    camera.fovy = 70.0f;
    camera.projection = CAMERA_PERSPECTIVE;

    Vector3 cubePosition = {1.0f, -1.0f, 0.0f};

    DisableCursor();

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        UpdateCamera(&camera, CAMERA_FREE);
        ClearBackground(GRAY);

        BeginDrawing();

        BeginMode3D(camera);

        BeginBlendMode(BLEND_ALPHA);
        DrawCube(cubePosition, 1.0f, 1.0f, 1.0f, WHITE);
        DrawCube({1.0, 0.0, 0.0}, 3.0f, 4.0f, 2.0f, Fade(RED, 0.5f));

        EndBlendMode();

        EndMode3D();

        EndDrawing();
    }

    CloseWindow();
}

}  // namespace Warehouse