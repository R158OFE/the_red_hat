#include <iostream>
#include "coreGame.h"


std::string name = "theredhat";

void inputName(){

    std::cout << "unput your name no(space): " << std::endl;
    std::cin >> name;
}


void screenComputer(){
    std::string command;
    clearScreen();
    
    std::cout << "My Computer:" << std::endl;
    std::cout << "user name " << name << std::endl;
    std::cout << "linux" << std::endl;
    std::cout << name << "@kali" << "~$ ";
    std::cin >> command;

}

