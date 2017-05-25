#pragma once
#include <stdlib.h>

// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <glfw3.h>

// Include GLM
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

class ThinGlViewer {
    public:
        void render();
        GLFWwindow* window;
        void initWindow(const char* windowName, const int width, const int height);
};
