cmake_minimum_required(VERSION 3.2)

project(visual_thingy)

set(CMAKE_AUTOMOC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

qt_standard_project_setup()

add_executable(main main.cpp)

add_subdirectory(src/app)
add_subdirectory(src/lab_funcs)

include_directories(src/app)
include_directories(src/lab_funcs)
include_directories(src/app/ui)

target_link_libraries(main PRIVATE 
    app_lib
    lab_lib
    Qt::Core
    Qt::Gui
    Qt::Widgets
)