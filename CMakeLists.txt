cmake_minimum_required (VERSION 3.14)
project(fungivsfiends)
find_package(OpenGL REQUIRED)

add_executable(fungivsfiends
main.cpp
mlh-renderer/glad.c
mlh-renderer/lib/Renderer.cpp
mlh-renderer/lib/FileReader.cpp
mlh-renderer/lib/InitOpenGL.cpp
mlh-renderer/lib/QuadButton.cpp
mlh-renderer/lib/QuadGenerator.cpp
mlh-renderer/lib/RectangleRenderer.cpp
mlh-renderer/lib/Shader.cpp
mlh-renderer/lib/stb_image.cpp
mlh-renderer/lib/Window.cpp
mlh-renderer/lib/MouseButtons.cpp
mlh-renderer/lib/Keys.cpp)

target_include_directories(fungivsfiends PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" "${CMAKE_CURRENT_SOURCE_DIR}/mlh-renderer/include")
target_link_libraries(fungivsfiends glfw)
