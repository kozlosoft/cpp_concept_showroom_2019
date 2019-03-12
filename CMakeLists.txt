cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project(cpp_concept_showroom_2019)

add_executable(${PROJECT_NAME}
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
  )
set_target_properties(${PROJECT_NAME} 
    PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON)
target_compile_options(${PROJECT_NAME} 
    PRIVATE -Wall -Wextra -pedantic -Werror -Wfatal-errors -fconcepts)
target_include_directories(${PROJECT_NAME} 
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
