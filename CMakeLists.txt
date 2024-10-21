cmake_minimum_required(VERSION 3.18)
project(e_ink_client_c)

set(CMAKE_CXX_STANDARD 20)

# Specify the directory where IT8951 source files are located
set(IT8951_SRC_DIR "IT8951")  # Update this path to your IT8951 folder
file(GLOB IT8951_SRC "${IT8951_SRC_DIR}/*.c")

include_directories("${IT8951_SRC_DIR}")

# Add your executable
add_executable(e_ink_client_c main.cpp ${IT8951_SRC})

# Find and link BCM2835 library
find_library(BCM2835_LIB bcm2835)
target_link_libraries(e_ink_client_c ${BCM2835_LIB})
