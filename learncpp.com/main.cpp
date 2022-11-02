//
//  main.cpp
//  learncpp.com
//
//  Created by Johnathan on 02/11/2022.
//

#include <iostream>
#include "Header.h"

int chapterNumber {};

int main(int argc, const char * argv[]) {
    std::cout << "CHAPTER SELECTOR: \n\n"
        "(1) 1.1 - Hello World \n"
        "(2) 1.6 - Uninitialized variables and undefined behavior \n"
        "\n ENTER A NUMBER : ";
    std::cin >> chapterNumber;
    chapterSelection(chapterNumber);
    return 0;
}

void chapterSelection(int i) {
    switch (chapterNumber) {
        case 1:
            helloWorld();
            break;
        case 2:
            uninitializedVariable();
            break;
            
        default:
            std::cout << "Numéro de chapitre non-valide. \n";
            break;
    }
}

