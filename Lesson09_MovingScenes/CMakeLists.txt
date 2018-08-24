set(LESSON09 "moving_scenes")

qt5_wrap_cpp(${LESSON09}_MOCS 
              openglwindow.h
              moveingsceneswindow.h)

qt5_add_resources(${LESSON09}_RESOURCES
                  src.qrc)

add_executable(${LESSON09}
               main.cpp
               openglwindow.cpp
               moveingsceneswindow.cpp
               ${${LESSON09}_MOCS}
               ${${LESSON09}_RESOURCES}
)

target_include_directories(${LESSON09}
              PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
              )

target_link_libraries(${LESSON09} Qt5::Core Qt5::Widgets Qt5::Gui)