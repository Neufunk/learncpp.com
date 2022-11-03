//
//  ReturnStatement.cpp
//  learncpp.com
//  Chapter 2.3 - Get value from user with return statement
//  Created by Johnathan on 03/11/2022.
//

#include <stdio.h>
#include <iostream>
#include "Header.h"

void returnStatement(){
    int num = getInputFromUser();
    std::cout << "getInputFromUser() returned : " << num;
}

int getInputFromUser(){
    std::cout << "Enter an int: ";
    int num{};
    std::cin >> num;
    
    return num;
}
