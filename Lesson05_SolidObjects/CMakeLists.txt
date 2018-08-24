set(LESSON05 "solid_object")

qt5_wrap_cpp(${LESSON05}_MOCS 
              openglwindow.h
              polygonwindow.h)

qt5_add_resources(${LESSON05}_RESOURCES
                  src.qrc)

add_executable(${LESSON05}
               main.cpp
               openglwindow.cpp
               polygonwindow.cpp
               ${${LESSON05}_MOCS}
               ${${LESSON05}_RESOURCES}
)

target_include_directories(${LESSON05}
              PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
              )

target_link_libraries(${LESSON05} Qt5::Core Qt5::Widgets Qt5::Gui)