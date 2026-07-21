cmake_minimum_required(VERSION 3.5)

project(remote_image_process LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# ⭐ 1. 将 C++ 标准提升到 17（LibTorch 1.13.1 必须使用 C++17）
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Qt Creator supports the following variables for Android, which are identical to qmake Android variables.
# Check http://doc.qt.io/qt-5/deployment-android.html for more information.
# They need to be set before the find_package(Qt5 ...) call.

#if(ANDROID)
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    if (ANDROID_ABI STREQUAL "armeabi-v7a")
#        set(ANDROID_EXTRA_LIBS
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
#    endif()
#endif()

# ⭐ 2. 指定 LibTorch 路径（请确认你的 LibTorch 解压后绝对路径）
list(APPEND CMAKE_PREFIX_PATH "$ENV{HOME}/libtorch")

# ⭐ 3. 查找 LibTorch
find_package(Torch REQUIRED)

# 查找 Qt5
find_package(Qt5 COMPONENTS Widgets LinguistTools REQUIRED)

set(TS_FILES remote_image_process_zh_CN.ts)

if(ANDROID)
  add_library(remote_image_process SHARED
    main.cpp
    mainwindow.cpp
    cd.cpp
    cd.h
    cd.ui
    mainwindow.h
    mainwindow.ui
    ${TS_FILES}
  )
else()
  add_executable(remote_image_process
    main.cpp
    mainwindow.cpp
    cd.cpp
    cd.h
    cd.ui
    mainwindow.h
    mainwindow.ui
    ${TS_FILES}
  )
endif()

# ⭐ 4. 链接 Qt 库和 LibTorch 库
target_link_libraries(remote_image_process PRIVATE
    Qt5::Widgets
    ${TORCH_LIBRARIES}
)

qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
