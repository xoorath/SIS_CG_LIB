cmake_minimum_required(VERSION 3.0.2)

###################################################################### PROJECT

project(sis_cg)

###################################################################### FILES

# Setup source files for our target
file(GLOB_RECURSE sis_cg_source 
    "Source/*.cpp" 
)

###################################################################### TARGET

# Note: 
# don't edit the CMAKE_STATIC_LIBRARY_PREFIX var to remove the "lib" 
# prefix on the library, codingame needs the prefix to find the file

# Create our target as a library, link our sources
add_library(sis_cg ${sis_cg_source})

###################################################################### TARGET SETTINGS

# Setup include directories for our target
target_include_directories(sis_cg PUBLIC 
    "${CMAKE_CURRENT_SOURCE_DIR}/Include"
)

###################################################################### PACKAGE

# Add includes and target binary to our package
install(DIRECTORY Include/ DESTINATION Include )
install(TARGETS sis_cg ARCHIVE DESTINATION .)

# Name the package file (excluding extension)
set(CPACK_PACKAGE_FILE_NAME "sis_cg")

# Don't create a self-named folder inside the package file
set(CPACK_INCLUDE_TOPLEVEL_DIRECTORY OFF)

# Tell cpack to use the zip generator
set(CPACK_GENERATOR "ZIP")

# Use the CPack module
include(CPack)