cmake_minimum_required(VERSION 3.4)

project(PetitRPG)
set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})

include_directories(includes)
include_directories(lib/allegro-5.2.2.0/include)

add_subdirectory(lib/allegro-5.2.2.0)

file(
        GLOB_RECURSE
        source_files
        src/*
)

add_executable(
        PetitRPG
        ${source_files}
        )

target_link_libraries(PetitRPG ALLEGRO)