#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#ifndef HELLOTRIANGLE_H
#define HELLOTRIANGLE_H_H

// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;
const char* vertexShaderSource = "../shaders/triangle.vs";
const char* fragmentShaderSource = "../shaders/triangle.vs";

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow* window);

#endif