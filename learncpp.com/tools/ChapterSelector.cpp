//
//  ChapterSelector.cpp
//  learncpp.com
//
//  Created by Johnathan on 03/11/2022.
//

#include <iostream>
#include "Header.h"

void chapterSelector() {
    
    int chapterNumber{};
    
    std::cout << "CHAPTER SELECTOR: \n\n"
    "(1) 1.1  - Hello World \n"
    "(2) 1.6  - Uninitialized variables and undefined behavior \n"
    "(3) 1.11 - Developing your first program - Double a number \n"
    "(4) 2.3  - Return Statement - Input from user \n"
    "\n ENTER A NUMBER : ";
    
    std::cin >> chapterNumber;
    chapterSelection(chapterNumber);
    std::cout << std::endl;
}

void chapterSelection(int chapterNumber) {
    switch (chapterNumber) {
        case 1:
            helloWorld();
            break;
        case 2:
            uninitializedVariable();
            break;
        case 3:
            doubleInt();
            break;
        case 4:
            returnStatement();
            break;
        default:
            std::cout << "Numéro de chapitre non-valide. \n";
            break;
    }
}

