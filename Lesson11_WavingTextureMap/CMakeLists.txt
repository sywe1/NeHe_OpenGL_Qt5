set(LESSON11 "waving_texture_map")

qt5_wrap_cpp(${LESSON11}_MOCS 
              openglwindow.h
              texturemappingwindow.h)

qt5_add_resources(${LESSON11}_RESOURCES
                  src.qrc)

add_executable(${LESSON11}
               main.cpp
               openglwindow.cpp
               texturemappingwindow.cpp
               ${${LESSON11}_MOCS}
               ${${LESSON11}_RESOURCES}
)

target_include_directories(${LESSON11}
              PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
              )

target_link_libraries(${LESSON11} Qt5::Core Qt5::Widgets Qt5::Gui)