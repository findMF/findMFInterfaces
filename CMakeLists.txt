#Author : Witold Wolski
PROJECT(findMFInterfaces) # findMF High Content screening
#############################################################################
# cmake setup
#############################################################################
cmake_minimum_required(VERSION 2.8)

#############################################################################
# QT - Creator tweak so that it sees headers
#############################################################################
file(GLOB Demo_HEADERS "include/*.h" "include/**/*.h"
 "include/**/**/*.h" "include/**/**/**/*.h" ".travis.yml")

add_library(headers SHARED ${Demo_HEADERS} Dummy.cpp)

