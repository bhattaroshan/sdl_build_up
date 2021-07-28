cmake_minimum_required(VERSION 3.7)
project(sound)
# find_package(SDL2 REQUIRED)

# file(GLOB_RECURSE SRC_FILES ${PROJECT_SOURCE_DIR}/SDL2/src/*.cpp)
# add_executable(foo ${SRC_FILES})

# add_library(soundtest SHARED ${SRC_FILES})
add_library(soundtest SHARED main.cpp sdlLayer.cpp)
add_executable(${PROJECT_NAME} main.cpp sdlLayer.cpp)
target_link_libraries(soundtest SDL2)

add_subdirectory(SDL2)
link_directories(${PROJECT_NAME} PUBLIC build/SDL2)
target_link_libraries(${PROJECT_NAME} SDL2)
target_include_directories(${PROJECT_NAME} PUBLIC SDL2/include)


# include_directories(${SDL2_INCLUDE_DIRS})
# target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})