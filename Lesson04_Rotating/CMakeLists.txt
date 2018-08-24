set(LESSON04 "rotating")

qt5_wrap_cpp(${LESSON04}_MOCS 
              openglwindow.h
              polygonwindow.h)

qt5_add_resources(${LESSON04}_RESOURCES
                  src.qrc)

add_executable(${LESSON04}
               main.cpp
               openglwindow.cpp
               polygonwindow.cpp
               ${${LESSON04}_MOCS}
               ${${LESSON04}_RESOURCES}
)

target_include_directories(${LESSON04}
              PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
              )

target_link_libraries(${LESSON04} Qt5::Core Qt5::Widgets Qt5::Gui)