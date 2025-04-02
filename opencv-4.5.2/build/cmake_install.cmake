# Install script for directory: /home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/opt/opencv4-imx6ull")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlicensesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/opencv4" TYPE FILE RENAME "opencl-headers-LICENSE.txt" FILES "/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/3rdparty/include/opencl/LICENSE.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv4/opencv2" TYPE FILE FILES "/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/cvconfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv4/opencv2" TYPE FILE FILES "/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/opencv2/opencv_modules.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/opencv4/OpenCVModules.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/opencv4/OpenCVModules.cmake"
         "/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/CMakeFiles/Export/lib/cmake/opencv4/OpenCVModules.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/opencv4/OpenCVModules-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/opencv4/OpenCVModules.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/opencv4" TYPE FILE FILES "/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/CMakeFiles/Export/lib/cmake/opencv4/OpenCVModules.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/opencv4" TYPE FILE FILES "/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/CMakeFiles/Export/lib/cmake/opencv4/OpenCVModules-release.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/opencv4" TYPE FILE FILES
    "/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/unix-install/OpenCVConfig-version.cmake"
    "/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/unix-install/OpenCVConfig.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES "/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/LICENSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/CMakeFiles/install/setup_vars_opencv4.sh")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/3rdparty/zlib/cmake_install.cmake")
  include("/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/3rdparty/libjpeg-turbo/cmake_install.cmake")
  include("/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/3rdparty/libtiff/cmake_install.cmake")
  include("/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/3rdparty/libwebp/cmake_install.cmake")
  include("/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/3rdparty/openjpeg/cmake_install.cmake")
  include("/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/3rdparty/libpng/cmake_install.cmake")
  include("/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/3rdparty/protobuf/cmake_install.cmake")
  include("/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/3rdparty/quirc/cmake_install.cmake")
  include("/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/include/cmake_install.cmake")
  include("/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/modules/cmake_install.cmake")
  include("/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/doc/cmake_install.cmake")
  include("/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/data/cmake_install.cmake")
  include("/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/apps/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/xukunyao/projects/Face_DoorLock_linux/opencv-4.5.2/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
