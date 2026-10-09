
#include <iostream>
#include "coreGame.h"
#include "version.h"

void loadMenu(){
    int choose;
    do{
    
        clearScreen();

        std::cout << "++=====================================++" << std::endl;
        std::cout << "||    welcome to hacker black          ||" << std::endl;
        std::cout << "++=====================================++" << std::endl;
        std::cout << "1: play game                             " << std::endl;
        std::cout << "2: new game                              " << std::endl;
        std::cout << "3: tutorial                              " << std::endl;
        std::cout << "0: exit                                  " << std::endl;
        std::cout << "version: " << VERSION << std::endl;
        std::cout << "choose: ";

        std::cin >> choose;
        switch (choose){
            case 1:
                mainMenu();
                break;
        }

    }while(choose != 0);
}


