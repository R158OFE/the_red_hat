#include <iostream>
#include "coreGame.h"

void mainMenu(){
    int choose;
    do{
        clearScreen();

        std::cout << "++=====================================++" << std::endl;
        std::cout << "||             Main Menu               ||" << std::endl;
        std::cout << "++=====================================++" << std::endl;
        std::cout << "1: my computer                           " << std::endl;
        std::cout << "2: my food                               " << std::endl;
        std::cout << "3: my phone                              " << std::endl;
        std::cout << "0: exit                                  " << std::endl;
        std::cout << "choose: ";

        std::cin >> choose;
         switch(choose){
            case 1:
                screenComputer();
                break;
        }

    }while(choose != 0);
}


