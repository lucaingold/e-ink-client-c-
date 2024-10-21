cmake_minimum_required(VERSION  3.18)
project(e_ink_client_c)

set(CMAKE_CXX_STANDARD 20)

set(IT8951_SRC_DIR "IT8951")  # Update this path to your IT8951 folder
file(GLOB IT8951_SRC "${IT8951_SRC_DIR}/*.c")

include_directories("${IT8951_SRC_DIR}")
add_executable(e_ink_client_c main.cpp ${IT8951_SRC})
