// 3rd-party library headers
#include "luajit-2.1/luajit.h"
#include "luajit-2.1/lualib.h"
#include "luajit-2.1/lauxlib.h"

int cube(lua_State *L){
    double num = luaL_checknumber(L, 1);
    
    double cubednum = num * num * num;

    lua_pushnumber(L, cubednum);
    return 1;
}