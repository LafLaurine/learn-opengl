#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#ifndef GLSHADER_H
#define GLSHADER_H

GLuint loadShader(const char* vertex_path, const char* fragment_path);

#endif