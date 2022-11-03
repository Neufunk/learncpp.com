//
//  Multiply_by_two.cpp
//  learncpp.com
//
//  Created by Johnathan on 02/11/2022.
//

#include <iostream>

void doubleInt() {
    std::cout << "Enter an integer: ";
    
    int num{};
    std::cin >> num ;
    
    std::cout << "Double that number is: " << num * 2 << std::endl;
}
