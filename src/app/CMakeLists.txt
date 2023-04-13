set(SOURCE
    app.cpp
    app_connect_ui.cpp
    tab1.cpp
    tab2.cpp
    tab3.cpp
    )

add_library(app_lib ${SOURCE})

include_directories(../lab_funcs)
include_directories(ui)

target_link_libraries(app_lib PRIVATE 
    Qt::Core
    Qt::Gui
    Qt::Widgets
)

target_include_directories(app_lib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})