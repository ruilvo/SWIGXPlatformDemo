cmake_minimum_required(VERSION 3.17 FATAL_ERROR)

cmake_policy(SET CMP0078 NEW)

project(amazing_counter)

find_package(SWIG)
include(UseSWIG)
set(UseSWIG_MODULE_VERSION 2)

add_library(amazing_counter SHARED
            ${CMAKE_CURRENT_SOURCE_DIR}/src/amazing_counter.cpp)
target_include_directories(amazing_counter
                           PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
install(TARGETS amazing_counter)

set_property(SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/swig/amazing_counter.i
             PROPERTY CPLUSPLUS ON)
set(UseSWIG_TARGET_NAME_PREFERENCE STANDARD)
swig_add_library(
  amazing_counter_cs
  LANGUAGE csharp
  SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/swig/amazing_counter.i)
set_property(TARGET amazing_counter_cs
             PROPERTY SWIG_USE_TARGET_INCLUDE_DIRECTORIES TRUE)
target_link_libraries(amazing_counter_cs amazing_counter)
