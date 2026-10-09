#include <iostream>
#include "version.h"

bool version(int argc, char **argv){
    std::string str = "--version";

    if(argc > 1 && argv[1] == str){
        std::cout << "version: " << VERSION << std::endl;
        std::cout << "copyright (C) 2026 by Huynh Nhat Hoang" << std::endl;
        return true;

    }
    return false;
}
