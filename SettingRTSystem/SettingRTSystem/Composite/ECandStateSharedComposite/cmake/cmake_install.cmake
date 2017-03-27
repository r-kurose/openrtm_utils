# Install script for directory: C:/workspace/MSMTest/SettingRTSystem/Composite/ECandStateSharedComposite/cmake

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/OpenRTM-aist")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "component" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/components/lib/pkgconfig" TYPE FILE FILES "C:/workspace/MSMTest/SettingRTSystem/Composite/ECandStateSharedComposite/cmake/ecandstatesharedcomposite.pc")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "library" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/components/share/ecandstatesharedcomposite-1" TYPE FILE FILES
    "C:/workspace/MSMTest/SettingRTSystem/Composite/ECandStateSharedComposite/cmake/ecandstatesharedcomposite-config.cmake"
    "C:/workspace/MSMTest/SettingRTSystem/Composite/ECandStateSharedComposite/cmake/ecandstatesharedcomposite-config-version.cmake"
    )
endif()

