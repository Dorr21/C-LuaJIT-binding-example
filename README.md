# C-LuaJIT-binding-example
A simple test/example I made in order to learn how to bind LuaJIT to C.

This repo includes a simple custom lua function I made called cube(), which returns the cube of any number you put into it.

When you build your executable into the build folder, it should run the main.lua file within the luascripts folder. You can
write whatever lua code you want in there, including using the new custom cube() function, and it will run it, including other
files/modules you link within.

I hope you can find some use with this for your own project. This has been another step for me in my coding journey, and one
day I hope I can do amazing things with coding.

Anyways, here are the libraries that you will need to build this project:
1. luajit-2.1
2. PkgConfig

Hope you enjoy :)
