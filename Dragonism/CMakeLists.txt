cmake_minimum_required(VERSION 3.16)

project(Dragonism VERSION 0.1 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.10)

qt_add_executable(appDragonism
    main.cpp
    scripts/dragonism.c


)

qt_add_qml_module(appDragonism
    URI Dragonism
    QML_FILES
        Main.qml
        SOURCES scripts/dragonism_handler.h
        SOURCES scripts/dragonism.h
        RESOURCES assets/images/application-exit-symbolic.svg assets/images/keyboard.svg
        RESOURCES fonts/JetBrainsMono-Italic-VariableFont_wght.ttf fonts/JetBrainsMono-VariableFont_wght.ttf fonts/mont.ttf fonts/Montserrat-Italic-VariableFont_wght.ttf
        QML_FILES about.qml
        QML_FILES MainMenu.qml
        RESOURCES assets/images/theme.png

)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appDragonism PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appDragonism
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appDragonism
    PRIVATE Qt6::Quick
    ${LIBUSB_LIBRARIES}
    PRIVATE Qt6::Quick usb-1.0
)

install(TARGETS appDragonism
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
