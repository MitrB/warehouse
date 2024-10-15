add_subdirectory(glfw EXCLUDE_FROM_ALL)

add_library(glad STATIC glad.c)
target_include_directories(glad PUBLIC glad KHR)
