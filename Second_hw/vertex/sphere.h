#ifndef TUTORIALS_SPHERE_H
#define TUTORIALS_SPHERE_H
#include <GL/glew.h>

// Our vertices.
static const GLfloat g_vertex_buffer_data_sphere[] = {
        -0.0000f, -0.0000f, 1.0000f,
        -0.4755f, -0.3455f, 0.8090f,
        -0.0000f, -0.0000f, 1.0000f,
        -0.0000f, -0.0000f, 1.0000f,
        -0.5878f, -0.0000f, 0.8090f,
        -0.4755f, -0.3455f, 0.8090f,
        -0.0000f, -0.0000f, 1.0000f,
        -0.1816f, -0.5590f, 0.8090f,
        -0.0000f, -0.0000f, 1.0000f,
        -0.0000f, -0.0000f, 1.0000f,
        -0.4755f, -0.3455f, 0.8090f,
        -0.1816f, -0.5590f, 0.8090f,
        -0.0000f, -0.0000f, 1.0000f,
        0.1816f, -0.5590f, 0.8090f,
        0.0000f, -0.0000f, 1.0000f,
        -0.0000f, -0.0000f, 1.0000f,
        -0.1816f, -0.5590f, 0.8090f,
        0.1816f, -0.5590f, 0.8090f,
        0.0000f, -0.0000f, 1.0000f,
        0.4755f, -0.3455f, 0.8090f,
        0.0000f, -0.0000f, 1.0000f,
        0.0000f, -0.0000f, 1.0000f,
        0.1816f, -0.5590f, 0.8090f,
        0.4755f, -0.3455f, 0.8090f,
        0.0000f, -0.0000f, 1.0000f,
        0.5878f, 0.0000f, 0.8090f,
        0.0000f, 0.0000f, 1.0000f,
        0.0000f, -0.0000f, 1.0000f,
        0.4755f, -0.3455f, 0.8090f,
        0.5878f, 0.0000f, 0.8090f,
        0.0000f, 0.0000f, 1.0000f,
        0.4755f, 0.3455f, 0.8090f,
        0.0000f, 0.0000f, 1.0000f,
        0.0000f, 0.0000f, 1.0000f,
        0.5878f, 0.0000f, 0.8090f,
        0.4755f, 0.3455f, 0.8090f,
        0.0000f, 0.0000f, 1.0000f,
        0.1816f, 0.5590f, 0.8090f,
        0.0000f, 0.0000f, 1.0000f,
        0.0000f, 0.0000f, 1.0000f,
        0.4755f, 0.3455f, 0.8090f,
        0.1816f, 0.5590f, 0.8090f,
        0.0000f, 0.0000f, 1.0000f,
        -0.1816f, 0.5590f, 0.8090f,
        -0.0000f, 0.0000f, 1.0000f,
        0.0000f, 0.0000f, 1.0000f,
        0.1816f, 0.5590f, 0.8090f,
        -0.1816f, 0.5590f, 0.8090f,
        -0.0000f, 0.0000f, 1.0000f,
        -0.4755f, 0.3455f, 0.8090f,
        -0.0000f, 0.0000f, 1.0000f,
        -0.0000f, 0.0000f, 1.0000f,
        -0.1816f, 0.5590f, 0.8090f,
        -0.4755f, 0.3455f, 0.8090f,
        -0.0000f, 0.0000f, 1.0000f,
        -0.5878f, -0.0000f, 0.8090f,
        -0.0000f, -0.0000f, 1.0000f,
        -0.0000f, 0.0000f, 1.0000f,
        -0.4755f, 0.3455f, 0.8090f,
        -0.5878f, -0.0000f, 0.8090f,
        -0.5878f, -0.0000f, 0.8090f,
        -0.7694f, -0.5590f, 0.3090f,
        -0.4755f, -0.3455f, 0.8090f,
        -0.5878f, -0.0000f, 0.8090f,
        -0.9511f, -0.0000f, 0.3090f,
        -0.7694f, -0.5590f, 0.3090f,
        -0.4755f, -0.3455f, 0.8090f,
        -0.2939f, -0.9045f, 0.3090f,
        -0.1816f, -0.5590f, 0.8090f,
        -0.4755f, -0.3455f, 0.8090f,
        -0.7694f, -0.5590f, 0.3090f,
        -0.2939f, -0.9045f, 0.3090f,
        -0.1816f, -0.5590f, 0.8090f,
        0.2939f, -0.9045f, 0.3090f,
        0.1816f, -0.5590f, 0.8090f,
        -0.1816f, -0.5590f, 0.8090f,
        -0.2939f, -0.9045f, 0.3090f,
        0.2939f, -0.9045f, 0.3090f,
        0.1816f, -0.5590f, 0.8090f,
        0.7694f, -0.5590f, 0.3090f,
        0.4755f, -0.3455f, 0.8090f,
        0.1816f, -0.5590f, 0.8090f,
        0.2939f, -0.9045f, 0.3090f,
        0.7694f, -0.5590f, 0.3090f,
        0.4755f, -0.3455f, 0.8090f,
        0.9511f, 0.0000f, 0.3090f,
        0.5878f, 0.0000f, 0.8090f,
        0.4755f, -0.3455f, 0.8090f,
        0.7694f, -0.5590f, 0.3090f,
        0.9511f, 0.0000f, 0.3090f,
        0.5878f, 0.0000f, 0.8090f,
        0.7694f, 0.5590f, 0.3090f,
        0.4755f, 0.3455f, 0.8090f,
        0.5878f, 0.0000f, 0.8090f,
        0.9511f, 0.0000f, 0.3090f,
        0.7694f, 0.5590f, 0.3090f,
        0.4755f, 0.3455f, 0.8090f,
        0.2939f, 0.9045f, 0.3090f,
        0.1816f, 0.5590f, 0.8090f,
        0.4755f, 0.3455f, 0.8090f,
        0.7694f, 0.5590f, 0.3090f,
        0.2939f, 0.9045f, 0.3090f,
        0.1816f, 0.5590f, 0.8090f,
        -0.2939f, 0.9045f, 0.3090f,
        -0.1816f, 0.5590f, 0.8090f,
        0.1816f, 0.5590f, 0.8090f,
        0.2939f, 0.9045f, 0.3090f,
        -0.2939f, 0.9045f, 0.3090f,
        -0.1816f, 0.5590f, 0.8090f,
        -0.7694f, 0.5590f, 0.3090f,
        -0.4755f, 0.3455f, 0.8090f,
        -0.1816f, 0.5590f, 0.8090f,
        -0.2939f, 0.9045f, 0.3090f,
        -0.7694f, 0.5590f, 0.3090f,
        -0.4755f, 0.3455f, 0.8090f,
        -0.9511f, -0.0000f, 0.3090f,
        -0.5878f, -0.0000f, 0.8090f,
        -0.4755f, 0.3455f, 0.8090f,
        -0.7694f, 0.5590f, 0.3090f,
        -0.9511f, -0.0000f, 0.3090f,
        -0.9511f, -0.0000f, 0.3090f,
        -0.7694f, -0.5590f, -0.3090f,
        -0.7694f, -0.5590f, 0.3090f,
        -0.9511f, -0.0000f, 0.3090f,
        -0.9511f, -0.0000f, -0.3090f,
        -0.7694f, -0.5590f, -0.3090f,
        -0.7694f, -0.5590f, 0.3090f,
        -0.2939f, -0.9045f, -0.3090f,
        -0.2939f, -0.9045f, 0.3090f,
        -0.7694f, -0.5590f, 0.3090f,
        -0.7694f, -0.5590f, -0.3090f,
        -0.2939f, -0.9045f, -0.3090f,
        -0.2939f, -0.9045f, 0.3090f,
        0.2939f, -0.9045f, -0.3090f,
        0.2939f, -0.9045f, 0.3090f,
        -0.2939f, -0.9045f, 0.3090f,
        -0.2939f, -0.9045f, -0.3090f,
        0.2939f, -0.9045f, -0.3090f,
        0.2939f, -0.9045f, 0.3090f,
        0.7694f, -0.5590f, -0.3090f,
        0.7694f, -0.5590f, 0.3090f,
        0.2939f, -0.9045f, 0.3090f,
        0.2939f, -0.9045f, -0.3090f,
        0.7694f, -0.5590f, -0.3090f,
        0.7694f, -0.5590f, 0.3090f,
        0.9511f, 0.0000f, -0.3090f,
        0.9511f, 0.0000f, 0.3090f,
        0.7694f, -0.5590f, 0.3090f,
        0.7694f, -0.5590f, -0.3090f,
        0.9511f, 0.0000f, -0.3090f,
        0.9511f, 0.0000f, 0.3090f,
        0.7694f, 0.5590f, -0.3090f,
        0.7694f, 0.5590f, 0.3090f,
        0.9511f, 0.0000f, 0.3090f,
        0.9511f, 0.0000f, -0.3090f,
        0.7694f, 0.5590f, -0.3090f,
        0.7694f, 0.5590f, 0.3090f,
        0.2939f, 0.9045f, -0.3090f,
        0.2939f, 0.9045f, 0.3090f,
        0.7694f, 0.5590f, 0.3090f,
        0.7694f, 0.5590f, -0.3090f,
        0.2939f, 0.9045f, -0.3090f,
        0.2939f, 0.9045f, 0.3090f,
        -0.2939f, 0.9045f, -0.3090f,
        -0.2939f, 0.9045f, 0.3090f,
        0.2939f, 0.9045f, 0.3090f,
        0.2939f, 0.9045f, -0.3090f,
        -0.2939f, 0.9045f, -0.3090f,
        -0.2939f, 0.9045f, 0.3090f,
        -0.7694f, 0.5590f, -0.3090f,
        -0.7694f, 0.5590f, 0.3090f,
        -0.2939f, 0.9045f, 0.3090f,
        -0.2939f, 0.9045f, -0.3090f,
        -0.7694f, 0.5590f, -0.3090f,
        -0.7694f, 0.5590f, 0.3090f,
        -0.9511f, -0.0000f, -0.3090f,
        -0.9511f, -0.0000f, 0.3090f,
        -0.7694f, 0.5590f, 0.3090f,
        -0.7694f, 0.5590f, -0.3090f,
        -0.9511f, -0.0000f, -0.3090f,
        -0.9511f, -0.0000f, -0.3090f,
        -0.4755f, -0.3455f, -0.8090f,
        -0.7694f, -0.5590f, -0.3090f,
        -0.9511f, -0.0000f, -0.3090f,
        -0.5878f, -0.0000f, -0.8090f,
        -0.4755f, -0.3455f, -0.8090f,
        -0.7694f, -0.5590f, -0.3090f,
        -0.1816f, -0.5590f, -0.8090f,
        -0.2939f, -0.9045f, -0.3090f,
        -0.7694f, -0.5590f, -0.3090f,
        -0.4755f, -0.3455f, -0.8090f,
        -0.1816f, -0.5590f, -0.8090f,
        -0.2939f, -0.9045f, -0.3090f,
        0.1816f, -0.5590f, -0.8090f,
        0.2939f, -0.9045f, -0.3090f,
        -0.2939f, -0.9045f, -0.3090f,
        -0.1816f, -0.5590f, -0.8090f,
        0.1816f, -0.5590f, -0.8090f,
        0.2939f, -0.9045f, -0.3090f,
        0.4755f, -0.3455f, -0.8090f,
        0.7694f, -0.5590f, -0.3090f,
        0.2939f, -0.9045f, -0.3090f,
        0.1816f, -0.5590f, -0.8090f,
        0.4755f, -0.3455f, -0.8090f,
        0.7694f, -0.5590f, -0.3090f,
        0.5878f, 0.0000f, -0.8090f,
        0.9511f, 0.0000f, -0.3090f,
        0.7694f, -0.5590f, -0.3090f,
        0.4755f, -0.3455f, -0.8090f,
        0.5878f, 0.0000f, -0.8090f,
        0.9511f, 0.0000f, -0.3090f,
        0.4755f, 0.3455f, -0.8090f,
        0.7694f, 0.5590f, -0.3090f,
        0.9511f, 0.0000f, -0.3090f,
        0.5878f, 0.0000f, -0.8090f,
        0.4755f, 0.3455f, -0.8090f,
        0.7694f, 0.5590f, -0.3090f,
        0.1816f, 0.5590f, -0.8090f,
        0.2939f, 0.9045f, -0.3090f,
        0.7694f, 0.5590f, -0.3090f,
        0.4755f, 0.3455f, -0.8090f,
        0.1816f, 0.5590f, -0.8090f,
        0.2939f, 0.9045f, -0.3090f,
        -0.1816f, 0.5590f, -0.8090f,
        -0.2939f, 0.9045f, -0.3090f,
        0.2939f, 0.9045f, -0.3090f,
        0.1816f, 0.5590f, -0.8090f,
        -0.1816f, 0.5590f, -0.8090f,
        -0.2939f, 0.9045f, -0.3090f,
        -0.4755f, 0.3455f, -0.8090f,
        -0.7694f, 0.5590f, -0.3090f,
        -0.2939f, 0.9045f, -0.3090f,
        -0.1816f, 0.5590f, -0.8090f,
        -0.4755f, 0.3455f, -0.8090f,
        -0.7694f, 0.5590f, -0.3090f,
        -0.5878f, -0.0000f, -0.8090f,
        -0.9511f, -0.0000f, -0.3090f,
        -0.7694f, 0.5590f, -0.3090f,
        -0.4755f, 0.3455f, -0.8090f,
        -0.5878f, -0.0000f, -0.8090f,
        -0.5878f, -0.0000f, -0.8090f,
        0.0000f, 0.0000f, -1.0000f,
        -0.4755f, -0.3455f, -0.8090f,
        -0.5878f, -0.0000f, -0.8090f,
        0.0000f, 0.0000f, -1.0000f,
        0.0000f, 0.0000f, -1.0000f,
        -0.4755f, -0.3455f, -0.8090f,
        0.0000f, 0.0000f, -1.0000f,
        -0.1816f, -0.5590f, -0.8090f,
        -0.4755f, -0.3455f, -0.8090f,
        0.0000f, 0.0000f, -1.0000f,
        0.0000f, 0.0000f, -1.0000f,
        -0.1816f, -0.5590f, -0.8090f,
        -0.0000f, 0.0000f, -1.0000f,
        0.1816f, -0.5590f, -0.8090f,
        -0.1816f, -0.5590f, -0.8090f,
        0.0000f, 0.0000f, -1.0000f,
        -0.0000f, 0.0000f, -1.0000f,
        0.1816f, -0.5590f, -0.8090f,
        -0.0000f, 0.0000f, -1.0000f,
        0.4755f, -0.3455f, -0.8090f,
        0.1816f, -0.5590f, -0.8090f,
        -0.0000f, 0.0000f, -1.0000f,
        -0.0000f, 0.0000f, -1.0000f,
        0.4755f, -0.3455f, -0.8090f,
        -0.0000f, -0.0000f, -1.0000f,
        0.5878f, 0.0000f, -0.8090f,
        0.4755f, -0.3455f, -0.8090f,
        -0.0000f, 0.0000f, -1.0000f,
        -0.0000f, -0.0000f, -1.0000f,
        0.5878f, 0.0000f, -0.8090f,
        -0.0000f, -0.0000f, -1.0000f,
        0.4755f, 0.3455f, -0.8090f,
        0.5878f, 0.0000f, -0.8090f,
        -0.0000f, -0.0000f, -1.0000f,
        -0.0000f, -0.0000f, -1.0000f,
        0.4755f, 0.3455f, -0.8090f,
        -0.0000f, -0.0000f, -1.0000f,
        0.1816f, 0.5590f, -0.8090f,
        0.4755f, 0.3455f, -0.8090f,
        -0.0000f, -0.0000f, -1.0000f,
        -0.0000f, -0.0000f, -1.0000f,
        0.1816f, 0.5590f, -0.8090f,
        0.0000f, -0.0000f, -1.0000f,
        -0.1816f, 0.5590f, -0.8090f,
        0.1816f, 0.5590f, -0.8090f,
        -0.0000f, -0.0000f, -1.0000f,
        0.0000f, -0.0000f, -1.0000f,
        -0.1816f, 0.5590f, -0.8090f,
        0.0000f, -0.0000f, -1.0000f,
        -0.4755f, 0.3455f, -0.8090f,
        -0.1816f, 0.5590f, -0.8090f,
        0.0000f, -0.0000f, -1.0000f,
        0.0000f, -0.0000f, -1.0000f,
        -0.4755f, 0.3455f, -0.8090f,
        0.0000f, 0.0000f, -1.0000f,
        -0.5878f, -0.0000f, -0.8090f,
        -0.4755f, 0.3455f, -0.8090f,
        0.0000f, -0.0000f, -1.0000f,
        0.0000f, 0.0000f, -1.0000f
};

static const GLfloat g_uv_buffer_data_sphere[] = {
        0.0000f, 1.0000f,
        0.1000f, 0.8000f,
        0.1000f, 1.0000f,
        0.0000f, 1.0000f,
        0.0000f, 0.8000f,
        0.1000f, 0.8000f,
        0.1000f, 1.0000f,
        0.2000f, 0.8000f,
        0.2000f, 1.0000f,
        0.1000f, 1.0000f,
        0.1000f, 0.8000f,
        0.2000f, 0.8000f,
        0.2000f, 1.0000f,
        0.3000f, 0.8000f,
        0.3000f, 1.0000f,
        0.2000f, 1.0000f,
        0.2000f, 0.8000f,
        0.3000f, 0.8000f,
        0.3000f, 1.0000f,
        0.4000f, 0.8000f,
        0.4000f, 1.0000f,
        0.3000f, 1.0000f,
        0.3000f, 0.8000f,
        0.4000f, 0.8000f,
        0.4000f, 1.0000f,
        0.5000f, 0.8000f,
        0.5000f, 1.0000f,
        0.4000f, 1.0000f,
        0.4000f, 0.8000f,
        0.5000f, 0.8000f,
        0.5000f, 1.0000f,
        0.6000f, 0.8000f,
        0.6000f, 1.0000f,
        0.5000f, 1.0000f,
        0.5000f, 0.8000f,
        0.6000f, 0.8000f,
        0.6000f, 1.0000f,
        0.7000f, 0.8000f,
        0.7000f, 1.0000f,
        0.6000f, 1.0000f,
        0.6000f, 0.8000f,
        0.7000f, 0.8000f,
        0.7000f, 1.0000f,
        0.8000f, 0.8000f,
        0.8000f, 1.0000f,
        0.7000f, 1.0000f,
        0.7000f, 0.8000f,
        0.8000f, 0.8000f,
        0.8000f, 1.0000f,
        0.9000f, 0.8000f,
        0.9000f, 1.0000f,
        0.8000f, 1.0000f,
        0.8000f, 0.8000f,
        0.9000f, 0.8000f,
        0.9000f, 1.0000f,
        1.0000f, 0.8000f,
        1.0000f, 1.0000f,
        0.9000f, 1.0000f,
        0.9000f, 0.8000f,
        1.0000f, 0.8000f,
        0.0000f, 0.8000f,
        0.1000f, 0.6000f,
        0.1000f, 0.8000f,
        0.0000f, 0.8000f,
        0.0000f, 0.6000f,
        0.1000f, 0.6000f,
        0.1000f, 0.8000f,
        0.2000f, 0.6000f,
        0.2000f, 0.8000f,
        0.1000f, 0.8000f,
        0.1000f, 0.6000f,
        0.2000f, 0.6000f,
        0.2000f, 0.8000f,
        0.3000f, 0.6000f,
        0.3000f, 0.8000f,
        0.2000f, 0.8000f,
        0.2000f, 0.6000f,
        0.3000f, 0.6000f,
        0.3000f, 0.8000f,
        0.4000f, 0.6000f,
        0.4000f, 0.8000f,
        0.3000f, 0.8000f,
        0.3000f, 0.6000f,
        0.4000f, 0.6000f,
        0.4000f, 0.8000f,
        0.5000f, 0.6000f,
        0.5000f, 0.8000f,
        0.4000f, 0.8000f,
        0.4000f, 0.6000f,
        0.5000f, 0.6000f,
        0.5000f, 0.8000f,
        0.6000f, 0.6000f,
        0.6000f, 0.8000f,
        0.5000f, 0.8000f,
        0.5000f, 0.6000f,
        0.6000f, 0.6000f,
        0.6000f, 0.8000f,
        0.7000f, 0.6000f,
        0.7000f, 0.8000f,
        0.6000f, 0.8000f,
        0.6000f, 0.6000f,
        0.7000f, 0.6000f,
        0.7000f, 0.8000f,
        0.8000f, 0.6000f,
        0.8000f, 0.8000f,
        0.7000f, 0.8000f,
        0.7000f, 0.6000f,
        0.8000f, 0.6000f,
        0.8000f, 0.8000f,
        0.9000f, 0.6000f,
        0.9000f, 0.8000f,
        0.8000f, 0.8000f,
        0.8000f, 0.6000f,
        0.9000f, 0.6000f,
        0.9000f, 0.8000f,
        1.0000f, 0.6000f,
        1.0000f, 0.8000f,
        0.9000f, 0.8000f,
        0.9000f, 0.6000f,
        1.0000f, 0.6000f,
        0.0000f, 0.6000f,
        0.1000f, 0.4000f,
        0.1000f, 0.6000f,
        0.0000f, 0.6000f,
        0.0000f, 0.4000f,
        0.1000f, 0.4000f,
        0.1000f, 0.6000f,
        0.2000f, 0.4000f,
        0.2000f, 0.6000f,
        0.1000f, 0.6000f,
        0.1000f, 0.4000f,
        0.2000f, 0.4000f,
        0.2000f, 0.6000f,
        0.3000f, 0.4000f,
        0.3000f, 0.6000f,
        0.2000f, 0.6000f,
        0.2000f, 0.4000f,
        0.3000f, 0.4000f,
        0.3000f, 0.6000f,
        0.4000f, 0.4000f,
        0.4000f, 0.6000f,
        0.3000f, 0.6000f,
        0.3000f, 0.4000f,
        0.4000f, 0.4000f,
        0.4000f, 0.6000f,
        0.5000f, 0.4000f,
        0.5000f, 0.6000f,
        0.4000f, 0.6000f,
        0.4000f, 0.4000f,
        0.5000f, 0.4000f,
        0.5000f, 0.6000f,
        0.6000f, 0.4000f,
        0.6000f, 0.6000f,
        0.5000f, 0.6000f,
        0.5000f, 0.4000f,
        0.6000f, 0.4000f,
        0.6000f, 0.6000f,
        0.7000f, 0.4000f,
        0.7000f, 0.6000f,
        0.6000f, 0.6000f,
        0.6000f, 0.4000f,
        0.7000f, 0.4000f,
        0.7000f, 0.6000f,
        0.8000f, 0.4000f,
        0.8000f, 0.6000f,
        0.7000f, 0.6000f,
        0.7000f, 0.4000f,
        0.8000f, 0.4000f,
        0.8000f, 0.6000f,
        0.9000f, 0.4000f,
        0.9000f, 0.6000f,
        0.8000f, 0.6000f,
        0.8000f, 0.4000f,
        0.9000f, 0.4000f,
        0.9000f, 0.6000f,
        1.0000f, 0.4000f,
        1.0000f, 0.6000f,
        0.9000f, 0.6000f,
        0.9000f, 0.4000f,
        1.0000f, 0.4000f,
        0.0000f, 0.4000f,
        0.1000f, 0.2000f,
        0.1000f, 0.4000f,
        0.0000f, 0.4000f,
        0.0000f, 0.2000f,
        0.1000f, 0.2000f,
        0.1000f, 0.4000f,
        0.2000f, 0.2000f,
        0.2000f, 0.4000f,
        0.1000f, 0.4000f,
        0.1000f, 0.2000f,
        0.2000f, 0.2000f,
        0.2000f, 0.4000f,
        0.3000f, 0.2000f,
        0.3000f, 0.4000f,
        0.2000f, 0.4000f,
        0.2000f, 0.2000f,
        0.3000f, 0.2000f,
        0.3000f, 0.4000f,
        0.4000f, 0.2000f,
        0.4000f, 0.4000f,
        0.3000f, 0.4000f,
        0.3000f, 0.2000f,
        0.4000f, 0.2000f,
        0.4000f, 0.4000f,
        0.5000f, 0.2000f,
        0.5000f, 0.4000f,
        0.4000f, 0.4000f,
        0.4000f, 0.2000f,
        0.5000f, 0.2000f,
        0.5000f, 0.4000f,
        0.6000f, 0.2000f,
        0.6000f, 0.4000f,
        0.5000f, 0.4000f,
        0.5000f, 0.2000f,
        0.6000f, 0.2000f,
        0.6000f, 0.4000f,
        0.7000f, 0.2000f,
        0.7000f, 0.4000f,
        0.6000f, 0.4000f,
        0.6000f, 0.2000f,
        0.7000f, 0.2000f,
        0.7000f, 0.4000f,
        0.8000f, 0.2000f,
        0.8000f, 0.4000f,
        0.7000f, 0.4000f,
        0.7000f, 0.2000f,
        0.8000f, 0.2000f,
        0.8000f, 0.4000f,
        0.9000f, 0.2000f,
        0.9000f, 0.4000f,
        0.8000f, 0.4000f,
        0.8000f, 0.2000f,
        0.9000f, 0.2000f,
        0.9000f, 0.4000f,
        1.0000f, 0.2000f,
        1.0000f, 0.4000f,
        0.9000f, 0.4000f,
        0.9000f, 0.2000f,
        1.0000f, 0.2000f,
        0.0000f, 0.2000f,
        0.1000f, 0.0000f,
        0.1000f, 0.2000f,
        0.0000f, 0.2000f,
        0.0000f, 0.0000f,
        0.1000f, 0.0000f,
        0.1000f, 0.2000f,
        0.2000f, 0.0000f,
        0.2000f, 0.2000f,
        0.1000f, 0.2000f,
        0.1000f, 0.0000f,
        0.2000f, 0.0000f,
        0.2000f, 0.2000f,
        0.3000f, 0.0000f,
        0.3000f, 0.2000f,
        0.2000f, 0.2000f,
        0.2000f, 0.0000f,
        0.3000f, 0.0000f,
        0.3000f, 0.2000f,
        0.4000f, 0.0000f,
        0.4000f, 0.2000f,
        0.3000f, 0.2000f,
        0.3000f, 0.0000f,
        0.4000f, 0.0000f,
        0.4000f, 0.2000f,
        0.5000f, 0.0000f,
        0.5000f, 0.2000f,
        0.4000f, 0.2000f,
        0.4000f, 0.0000f,
        0.5000f, 0.0000f,
        0.5000f, 0.2000f,
        0.6000f, 0.0000f,
        0.6000f, 0.2000f,
        0.5000f, 0.2000f,
        0.5000f, 0.0000f,
        0.6000f, 0.0000f,
        0.6000f, 0.2000f,
        0.7000f, 0.0000f,
        0.7000f, 0.2000f,
        0.6000f, 0.2000f,
        0.6000f, 0.0000f,
        0.7000f, 0.0000f,
        0.7000f, 0.2000f,
        0.8000f, 0.0000f,
        0.8000f, 0.2000f,
        0.7000f, 0.2000f,
        0.7000f, 0.0000f,
        0.8000f, 0.0000f,
        0.8000f, 0.2000f,
        0.9000f, 0.0000f,
        0.9000f, 0.2000f,
        0.8000f, 0.2000f,
        0.8000f, 0.0000f,
        0.9000f, 0.0000f,
        0.9000f, 0.2000f,
        1.0000f, 0.0000f,
        1.0000f, 0.2000f,
        0.9000f, 0.2000f,
        0.9000f, 0.0000f,
        1.0000f, 0.0000f
};

#endif //TUTORIALS_SPHERE_H
