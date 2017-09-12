cmake_minimum_required(VERSION 3.4)

project(PetitRPG)
set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})


include_directories(includes)

file(
        GLOB_RECURSE
        source_files
        src/*
)

add_executable(
        PetitRPG
        ${source_files}

)

IF(CMAKE_SYSTEM_NAME STREQUAL Linux)
    include_directories(/usr/include)
    link_directories(/usr/lib)

    file(GLOB LIBRARIES "/usr/lib/liballegro*.so")
ELSE()
    include_directories(lib/allegro/include)
    link_directories(lib/allegro/lib)

    file(GLOB DLLFile "lib/allegro/bin/*.dll")
    file(COPY ${DLLFile} DESTINATION ${EXECUTABLE_OUTPUT_PATH})

    file(GLOB LIBRARIES "lib/allegro/lib/*")
ENDIF()

TARGET_LINK_LIBRARIES(PetitRPG  ${LIBRARIES})