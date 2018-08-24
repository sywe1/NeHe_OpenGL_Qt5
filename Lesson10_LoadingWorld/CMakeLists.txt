set(LESSON10 "loading_world")

qt5_wrap_cpp(${LESSON10}_MOCS 
              openglwindow.h
              worldwindow.h)

qt5_add_resources(${LESSON10}_RESOURCES
                  src.qrc)

add_executable(${LESSON10}
               main.cpp
               openglwindow.cpp
               worldwindow.cpp
               ${${LESSON10}_MOCS}
               ${${LESSON10}_RESOURCES}
)

target_include_directories(${LESSON10}
              PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
              )

target_link_libraries(${LESSON10} Qt5::Core Qt5::Widgets Qt5::Gui)