set(LESSON01 "create_window")

qt5_wrap_cpp(${LESSON01}_MOCS openglwindow.h)

add_executable(${LESSON01}
               main.cpp
               openglwindow.cpp
               ${${LESSON01}_MOCS}
)

target_include_directories(create_window
              PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
              )

target_link_libraries(create_window Qt5::Core Qt5::Widgets Qt5::Gui)