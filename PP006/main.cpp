#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <Windows.h>
#include <chrono>
#include <thread>

#pragma comment(lib,"OpenGL32")

static void error_callback(int error, const char* description)
{
    fputs(description, stderr);
}
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GL_TRUE);
}
int main(void)
{


    GLFWwindow* window;
    glfwSetErrorCallback(error_callback);
    if (!glfwInit())
        exit(EXIT_FAILURE);
    window = glfwCreateWindow(640, 480, "Simple example", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    glfwMakeContextCurrent(window);
    glfwSetKeyCallback(window, key_callback);

    while (!glfwWindowShouldClose(window))
    {
        float h1 = 0.0f;
        float h2 = -0.04f;
        float ratio;
        int width, height;
        glfwGetFramebufferSize(window, &width, &height);
        ratio = width / (float)height;


        glClearColor(1, 1, 1, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        /*glPointSize(10);

        glBegin(GL_POINTS);

        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.0f, 0.0f);

        glEnd();*/

        glPointSize(5);
        glBegin(GL_TRIANGLES);

        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.0f, h1);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.03f, h1);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.03f, h2);
        
        glEnd();

        glPointSize(5);
        glBegin(GL_TRIANGLES);

        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.0f, h1);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.0f, h2);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.03f, h2);

        glEnd();

        glfwSwapBuffers(window);
        glfwPollEvents();

        if (GetAsyncKeyState(VK_SPACE) && -0x8000 || GetAsyncKeyState(VK_SPACE) && -0x8001)        //h1 = 0.0f      h2 = -0.04f
        {
            h1 = 0.2f;
            h2 = 0.16f;
        }
        else
        {
            h1 = 0.0f;
            h2 = -0.04f;
        }
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}