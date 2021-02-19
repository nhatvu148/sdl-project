#include <sdlprojectConfig.h>
#include <iostream>
#include <adder.h>
#include <GLFW/glfw3.h>

int main(int argc, char** argv)
{
    std::cout << argv[0] << " Version " << sdlproject_VERSION_MAJOR << "." << sdlproject_VERSION_MINOR << '\n';
    std::cout << "Hello, world!\n";

    std::cout << add(1, 2) << "\n";

    GLFWwindow *window;

    if (!glfwInit())
    {
        fprintf(stderr, "Failed to initialize GLFW\n");
        exit(EXIT_FAILURE);
    }

    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

    // Main loop
    while( !glfwWindowShouldClose(window) )
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
