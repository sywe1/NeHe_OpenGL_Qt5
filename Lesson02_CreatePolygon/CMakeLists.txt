set(LESSON02 "create_polygon")

qt5_wrap_cpp(${LESSON02}_MOCS 
              openglwindow.h
              polygonwindow.h)

qt5_add_resources(${LESSON02}_RESOURCES
                  src.qrc)

add_executable(${LESSON02}
               main.cpp
               openglwindow.cpp
               polygonwindow.cpp
               ${${LESSON02}_MOCS}
               ${${LESSON02}_RESOURCES}
)

target_include_directories(${LESSON02}
              PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
              )

target_link_libraries(${LESSON02} Qt5::Core Qt5::Widgets Qt5::Gui)