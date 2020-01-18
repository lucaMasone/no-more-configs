cmake_minimum_required(VERSION 3.10)

# set the project name
project(NoMoreConfigs)

set(CMAKE_CXX_STANDARD 14) 

############################################################
# Create a library
############################################################



#Generate the static library from the library sources
add_library(NoMoreConfigs STATIC 
    include/NoMoreConfigs.h
    sources/NoMoreConfigs.cpp
    include/StringParser.h
    sources/StringParser.cpp
    include/Data/MemberInfo.h
    sources/Data/MemberInfo.cpp
)

source_group("Header Files\\Data" FILES "include/Data/MemberInfo.h")
source_group("Source Files\\Data" FILES "sources/Data/MemberInfo.cpp")

include_directories("include")

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(NoMoreConfigs_App 
   main.cpp
)

# link the new NoMoreConfigs target with the NoMoreConfigs_App target
target_link_libraries( NoMoreConfigs_App
    PRIVATE 
        NoMoreConfigs
)