project(helpers CXX C)
set(CMAKE_CXX_STANDARD 14)
cmake_minimum_required(VERSION 3.0)

# find Eigen
find_package(Eigen3 3.4.0 REQUIRED)

add_subdirectory(helpers)

# file(GLOB helpers_source_files RELATIVE "${CMAKE_SOURCE_DIR}/src" "${CMAKE_SOURCE_DIR}/src/*.cpp")

# foreach(src_file ${helpers_source_files})
#   string( REPLACE ".cpp" "" src_file_prefix ${src_file} )
#   add_executable(${src_file_prefix} "src/${src_file}")
# #   set_target_properties(${src_file_prefix} PROPERTIES LINKER_LANGUAGE CXX)
# endforeach(src_file)

add_executable(test_timer src/test_timer.cpp)