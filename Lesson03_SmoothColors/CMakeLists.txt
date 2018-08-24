set(LESSON03 "smooth_colors")

qt5_wrap_cpp(${LESSON03}_MOCS 
              openglwindow.h
              polygonwindow.h)

qt5_add_resources(${LESSON03}_RESOURCES
                  src.qrc)

add_executable(${LESSON03}
               main.cpp
               openglwindow.cpp
               polygonwindow.cpp
               ${${LESSON03}_MOCS}
               ${${LESSON03}_RESOURCES}
)

target_include_directories(${LESSON03}
              PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
              )

target_link_libraries(${LESSON03} Qt5::Core Qt5::Widgets Qt5::Gui)