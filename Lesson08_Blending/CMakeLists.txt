set(LESSON08 "blending")

qt5_wrap_cpp(${LESSON08}_MOCS 
              openglwindow.h
              texturemappingwindow.h)

qt5_add_resources(${LESSON08}_RESOURCES
                  src.qrc)

add_executable(${LESSON08}
               main.cpp
               openglwindow.cpp
               texturemappingwindow.cpp
               ${${LESSON08}_MOCS}
               ${${LESSON08}_RESOURCES}
)

target_include_directories(${LESSON08}
              PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
              )

target_link_libraries(${LESSON08} Qt5::Core Qt5::Widgets Qt5::Gui)