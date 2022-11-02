//
//  UninitializedVariable.cpp
//  learncpp.com
//  Chapter 1.6 - Uninitialized variables and undefined behavior
//  Created by Johnathan on 02/11/2022.
//

#include <stdio.h>
#include <iostream>

void uninitializedVariable() {
    // Create the uninitialized variable 'u'
    int u;
    std::cout << "Uninitialized variable is : " << u << std::endl;
}
