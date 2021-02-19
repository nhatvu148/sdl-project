#include <sdlprojectConfig.h>
#include <iostream>
#ifdef USE_ADDER
#include <adder.h>
#endif
#include <GLFW/glfw3.h>

int main(int argc, char **argv)
{
    std::cout << argv[0] << " Version " << sdlproject_VERSION_MAJOR << "." << sdlproject_VERSION_MINOR << '\n';
    std::cout << "Hello, world!\n";

#ifdef USE_ADDER
    std::cout << "Using Adder lib:" << add(1, 112) << "\n";
#else
    std::cout << "NOT using Adder lib:" << 12 + 14 << "\n";
#endif

    GLFWwindow *window;

    if (!glfwInit())
    {
        fprintf(stderr, "Failed to initialize GLFW\n");
        exit(EXIT_FAILURE);
    }

    window = glfwCreateWindow(300, 300, "Gears", NULL, NULL);
    if (!window)
    {
        fprintf(stderr, "Failed to open GLFW window\n");
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    // Main loop
    while (!glfwWindowShouldClose(window))
    {
        // Draw gears
        // draw();

        // Update animation
        // animate();

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();

    return 0;
}
