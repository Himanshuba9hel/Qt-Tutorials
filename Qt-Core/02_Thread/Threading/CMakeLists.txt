#cmake_minimum_required(VERSION 3.14)

#project(Theading LANGUAGES CXX)

#set(CMAKE_INCLUDE_CURRENT_DIR ON)

#set(CMAKE_AUTOUIC ON)
#set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTORCC ON)

#set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
#find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

#add_executable(Theading
#  main.cpp
#)

#target_link_libraries(Theading Qt${QT_VERSION_MAJOR}::Core)

cmake_minimum_required(VERSION 3.14)

project(Theading LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

add_executable(Theading
    main.cpp
    Example1/simplethread.cpp
    Example1/simplethread.h
    Example2/asynchronousthread.cpp
    Example2/asynchronousthread.h
)

target_include_directories(Theading
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/Example1
        ${CMAKE_CURRENT_SOURCE_DIR}/Example2
)

target_link_libraries(Theading
    Qt${QT_VERSION_MAJOR}::Core
)
