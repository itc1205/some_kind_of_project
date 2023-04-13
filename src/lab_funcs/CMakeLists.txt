set(SOURCE
    common_chars.cpp
    order_sportsmens.cpp
    stack_logic.cpp
)

add_library(lab_lib ${SOURCE})

target_link_libraries(lab_lib PRIVATE 
Qt::Core
Qt::Gui
Qt::Widgets
)

target_include_directories(lab_lib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})