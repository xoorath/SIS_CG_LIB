cmake_minimum_required(VERSION 3.2)
###################################################################### PROJECT
project(sis_cg_lib)
###################################################################### FILES

file(GLOB_RECURSE SIS_CG_LIB_INC "deps/*.h" "deps/*.inl" )
file(GLOB_RECURSE SIS_CG_LIB_SRC "sources/*.cpp" )

###################################################################### TARGET

add_library(SIS_CG_Lib ${SIS_CG_LIB_INC} ${SIS_CG_LIB_SRC})

###################################################################### SETTINGS

target_include_directories(SIS_CG_Lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/deps)

###################################################################### PACKAGE

install(DIRECTORY deps/
    DESTINATION deps
)

install(TARGETS SIS_CG_Lib
    ARCHIVE DESTINATION .
)

set(CPACK_PACKAGE_FILE_NAME "SIS_CG_LIB")
set(CPACK_INCLUDE_TOPLEVEL_DIRECTORY OFF)
set(CPACK_GENERATOR "ZIP" CACHE STRING "Generators to support. semi-colon delimited list")
include(CPack)