project(jellyfin-qt VERSION 0.1.0)
find_package(Qt5 5.6 COMPONENTS Multimedia Network Qml WebSockets REQUIRED)
include(GNUInstallDirs)

include(GeneratedSources.cmake)

set(jellyfin-qt_SOURCES
        # src/DTO/dto.cpp
        src/support/loader.cpp
        src/apiclient.cpp
        src/apimodel.cpp
        src/credentialmanager.cpp
        src/deviceprofile.cpp
        src/jellyfin.cpp
        src/jsonhelper.cpp
        src/playbackmanager.cpp
        src/remotedata.cpp
        src/serverdiscoverymodel.cpp
        src/websocket.cpp)

list(APPEND jellyfin-qt_SOURCES ${openapi_SOURCES})

set(jellyfin-qt_HEADERS
        # include/JellyfinQt/DTO/dto.h
        include/JellyfinQt/support/loader.h
        include/JellyfinQt/apiclient.h
        include/JellyfinQt/apimodel.h
        include/JellyfinQt/credentialmanager.h
        include/JellyfinQt/deviceprofile.h
        include/JellyfinQt/jellyfin.h
        include/JellyfinQt/jsonhelper.h
        include/JellyfinQt/playbackmanager.h
        include/JellyfinQt/remotedata.h
        include/JellyfinQt/serverdiscoverymodel.h
        include/JellyfinQt/websocket.h)
        
list(APPEND jellyfin-qt_SOURCES ${openapi_HEADERS})

add_definitions(-DSAILFIN_VERSION=\"${SAILFIN_VERSION}\")
if (PLATFORM_SAILFISHOS)
    add_definitions(-DPLATFORM_SAILFISHOS=1)
endif()
add_library(jellyfin-qt ${jellyfin-qt_SOURCES} ${jellyfin-qt_HEADERS})
if(${CMAKE_VERSION} VERSION_GREATER "3.16.0") 
	target_precompile_headers(jellyfin-qt PRIVATE ${jellyfin-qt_HEADERS})
endif()
target_include_directories(jellyfin-qt 
        PUBLIC "include" "generated/include"
)
target_link_libraries(jellyfin-qt PUBLIC Qt5::Core Qt5::Multimedia Qt5::Network Qt5::Qml Qt5::WebSockets)
set_target_properties(jellyfin-qt PROPERTIES CXX_VISIBILITY_PRESET default)
install(TARGETS jellyfin-qt 
	LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
	ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
	INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
	RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}")

export(TARGETS jellyfin-qt FILE JellyfinQtConfig.cmake)
