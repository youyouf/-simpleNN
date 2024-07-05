find_package(OpenMP)

#add_subdirectory(layer) #添加子文件夹下的
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)
#add_library(simpleNN STATIC $<TARGET_OBJECTS:layer> ${SRC})
add_library(simpleNN STATIC ${SRC})

if(OpenMP_CXX_FOUND)
    target_link_libraries(simpleNN OpenMP::OpenMP_CXX)
endif()