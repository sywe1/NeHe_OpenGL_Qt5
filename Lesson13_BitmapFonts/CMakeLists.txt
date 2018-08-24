set(LESSON13 "bitmap_fonts")

qt5_wrap_cpp(${LESSON13}_MOCS 
              openglwindow.h
              fontwindow.h)

qt5_add_resources(${LESSON13}_RESOURCES
                  src.qrc)

add_executable(${LESSON13}
               main.cpp
               openglwindow.cpp
               fontwindow.cpp
               ${${LESSON13}_MOCS}
               ${${LESSON13}_RESOURCES}
)

target_include_directories(${LESSON13}
              PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
              )

target_link_libraries(${LESSON13} Qt5::Core Qt5::Widgets Qt5::Gui)