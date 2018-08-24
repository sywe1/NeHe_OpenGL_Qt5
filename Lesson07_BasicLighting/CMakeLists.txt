set(LESSON07 "basic_lighting")

qt5_wrap_cpp(${LESSON07}_MOCS 
              openglwindow.h
              texturemappingwindow.h)

qt5_add_resources(${LESSON07}_RESOURCES
                  src.qrc)

add_executable(${LESSON07}
               main.cpp
               openglwindow.cpp
               texturemappingwindow.cpp
               ${${LESSON07}_MOCS}
               ${${LESSON07}_RESOURCES}
)

target_include_directories(${LESSON07}
              PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
              )

target_link_libraries(${LESSON07} Qt5::Core Qt5::Widgets Qt5::Gui)