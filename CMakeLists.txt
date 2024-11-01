cmake_minimum_required (VERSION 3.14)
project(fungivsfiends)
find_package(OpenGL REQUIRED)

add_executable(fungivsfiends
main.cpp
external/mlh-renderer/glad.c
external/mlh-renderer/lib/Renderer.cpp
external/mlh-renderer/lib/FileReader.cpp
external/mlh-renderer/lib/InitOpenGL.cpp
external/mlh-renderer/lib/QuadButton.cpp
external/mlh-renderer/lib/QuadGenerator.cpp
external/mlh-renderer/lib/RectangleRenderer.cpp
external/mlh-renderer/lib/Shader.cpp
external/mlh-renderer/lib/stb_image.cpp
external/mlh-renderer/lib/Window.cpp
external/mlh-renderer/lib/MouseButtons.cpp
external/mlh-renderer/lib/Keys.cpp)

target_include_directories(fungivsfiends PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" "${CMAKE_CURRENT_SOURCE_DIR}/external/mlh-renderer/include")
target_link_libraries(fungivsfiends glfw)
