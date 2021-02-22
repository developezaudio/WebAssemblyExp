#include <cstdio>
#include <iostream>
#include <emscripten.h>
#include <emscripten/bind.h>

void create_file()
{
    printf("well you dont want to create a file huh \n");
}

EMSCRIPTEN_BINDINGS(withoutglue)
{
    emscripten::function("create_file", &create_file);
}