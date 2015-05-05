cmake_minimum_required(VERSION 2.8)
project(magic)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    Magicengine/Font.cpp
    Magicengine/Font.h
    Magicengine/Game.cpp
    Magicengine/Game.h
    Magicengine/GameState.h
    Magicengine/Load.cpp
    Magicengine/Load.h
    Magicengine/Object.cpp
    Magicengine/Object.h
    Magicengine/ObjectManager.cpp
    Magicengine/ObjectManager.h
    Magicengine/Physics.cpp
    Magicengine/Physics.h
    Magicengine/Timer.cpp
    Magicengine/Timer.h
    main.cpp
    PlayState.cpp
    PlayState.h)

add_executable(magic ${SOURCE_FILES})

INCLUDE(FindPkgConfig)
PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
PKG_SEARCH_MODULE(SDL2_Image REQUIRED SDL2_image)
PKG_SEARCH_MODULE(SDL2_Ttf REQUIRED SDL2_ttf)

INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS})
INCLUDE_DIRECTORIES(${SDL2_Image_INCLUDE_DIRS})
INCLUDE_DIRECTORIES(${SDL2_Ttf_INCLUDE_DIRS})

TARGET_LINK_LIBRARIES(magic ${SDL2_LIBRARIES})
TARGET_LINK_LIBRARIES(magic ${SDL2_Image_LIBRARIES})
TARGET_LINK_LIBRARIES(magic ${SDL2_Ttf_LIBRARIES})