cmake_minimum_required(VERSION 3.10)

# set the project name
project(NoMoreConfigs)

set(CMAKE_CXX_STANDARD 11) 

############################################################
# Create a library
############################################################

#Generate the static library from the library sources
add_library(NoMoreConfigs STATIC 
    include/NoMoreConfigs.h
    sources/NoMoreConfigs.cpp
)

target_include_directories(NoMoreConfigs
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(NoMoreConfigs_App 
   main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries( NoMoreConfigs_App
    PRIVATE 
        NoMoreConfigs
)