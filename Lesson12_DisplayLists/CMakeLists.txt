set(LESSON12 "display_list")

qt5_wrap_cpp(${LESSON12}_MOCS 
              openglwindow.h
              texturemappingwindow.h)

qt5_add_resources(${LESSON12}_RESOURCES
                  src.qrc)

add_executable(${LESSON12}
               main.cpp
               openglwindow.cpp
               texturemappingwindow.cpp
               ${${LESSON12}_MOCS}
               ${${LESSON12}_RESOURCES}
)

target_include_directories(${LESSON12}
              PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
              )

target_link_libraries(${LESSON12} Qt5::Core Qt5::Widgets Qt5::Gui)