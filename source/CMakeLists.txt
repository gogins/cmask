project(cmask)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -Wall")
message(STATUS "CMAKE_MODULE_PATH: ${CMAKE_MODULE_PATH}")
set(CMAKE_BUILD_TYPE "RelWithDebInfo")
add_executable(cmask 
cmask.cpp
event.cpp
field.cpp
fileio.cpp
gen.cpp
items.cpp
mask.cpp
parser.cpp
quant.cpp
tables.cpp
utils.cpp)
target_compile_definitions(cmask PRIVATE D_IRIX)