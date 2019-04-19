cmake_minimum_required(VERSION 3.5)
project(Swc C)

set(CMAKE_C_STANDARD 99)

set(EXTRA_LIBS)
find_package(SDL REQUIRED)
if (SDL_FOUND)
    message(STATUS ${SDL_LIBRARY})
    include_directories(${SDL_INCLUDE_DIR})
    set(EXTRA_LIBS ${EXTRA_LIBS} SDL)
endif (SDL_FOUND)

aux_source_directory(. DIR_SRCS)

add_executable(swc ${DIR_SRCS})

target_link_libraries(swc ${EXTRA_LIBS})