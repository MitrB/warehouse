#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Warehouse {
class Frontend {
    public:
        void init();
        void draw();

        Frontend();
        ~Frontend();
    private:
        GLFWwindow* window;
};
}