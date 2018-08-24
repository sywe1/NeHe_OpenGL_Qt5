set(LESSON06 "texture_mapping")

qt5_wrap_cpp(${LESSON06}_MOCS 
              openglwindow.h
              texturemappingwindow.h)

qt5_add_resources(${LESSON06}_RESOURCES
                  src.qrc)

add_executable(${LESSON06}
               main.cpp
               openglwindow.cpp
               texturemappingwindow.cpp
               ${${LESSON06}_MOCS}
               ${${LESSON06}_RESOURCES}
)

target_include_directories(${LESSON06}
              PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
              )

target_link_libraries(${LESSON06} Qt5::Core Qt5::Widgets Qt5::Gui)