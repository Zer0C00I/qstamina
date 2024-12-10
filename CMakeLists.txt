cmake_minimum_required(VERSION 3.16)
project(qstamina VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_definitions(
    -DAPPLICATION_NAME="qstamina"
    -DORGANIZATION_NAME="OrgName"
)

find_package(Qt5 REQUIRED COMPONENTS 
    Core
    Gui
    Widgets
    Multimedia
)

set(PROJECT_SOURCES
    src/main.cpp
    src/stamina.cpp
    src/stamina.h
    src/stamina.ui
    src/config.cpp
    src/config.h
    src/keyboard.cpp
    src/keyboard.h
    src/keyboard.ui
    src/textfield.cpp
    src/textfield.h
    src/inlinefield.cpp
    src/inlinefield.h
    src/lessongenerator.cpp
    src/lessongenerator.h
    src/lessonslist.cpp
    src/lessonslist.h
    src/results.cpp
    src/results.h
    src/results.ui
    src/settingsform.cpp
    src/settingsform.h
    src/settingsform.ui
    src/sounds.cpp
    src/sounds.h
    src/about.cpp
    src/about.h
    src/about.ui
    src/res.qrc
)
add_executable(qstamina ${PROJECT_SOURCES})

target_link_libraries(qstamina PRIVATE
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    Qt5::Multimedia
)

install(TARGETS qstamina
    RUNTIME DESTINATION bin
)

install(DIRECTORY src/resources/
    DESTINATION share/qstamina
    FILES_MATCHING PATTERN "*"
)