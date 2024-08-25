cmake_minimum_required(VERSION 3.20)

project(luatest)

find_package(PkgConfig REQUIRED)  
pkg_check_modules(LuaJIT REQUIRED IMPORTED_TARGET luajit)

set(SOURCEFILES
    src/main.c
    src/math/mathtest.h
    src/math/mathtest.c
)

add_executable(luatest ${SOURCEFILES})
target_link_libraries(luatest PRIVATE PkgConfig::LuaJIT)
