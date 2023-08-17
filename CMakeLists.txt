cmake_minimum_required(VERSION 3.12)
project(program)

# Add include directories
include_directories(include)

# Add the library subdirectory
add_subdirectory(library)

# Add the executable target
add_executable(program src/main.cpp src/Print.cpp)

# Link the executable with the static library
target_link_libraries(program PRIVATE WriteInFile)

enable_testing()


# Install the executable to the bin directory
install(TARGETS program DESTINATION bin)

