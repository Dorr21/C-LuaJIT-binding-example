// Standard library headers
#include <stdio.h>
#include <stdlib.h>

// 3rd-party library headers
#include "luajit-2.1/luajit.h"
#include "luajit-2.1/lualib.h"
#include "luajit-2.1/lauxlib.h"

// Custom headers
#include "math/mathtest.h"


int main(int argc, char ** argv){
    lua_State *L = luaL_newstate(); // Create new Lua state
    luaL_openlibs(L); // Open Lua Standard Libraries

    lua_pushcfunction(L, cube);
    lua_setglobal(L, "cube");

    luaL_dofile(L, "luascripts/main.lua");

    lua_close(L); // Close Lua State
    return 0;
}