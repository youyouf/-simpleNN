link_directories(${CMAKE_SOURCE_DIR}/build/src/)#链接生成的NN库

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
#include_directories(${CMAKE_SOURCE_DIR}/src)

add_executable(test ${SRC})
target_link_libraries(test PRIVATE  simpleNN)