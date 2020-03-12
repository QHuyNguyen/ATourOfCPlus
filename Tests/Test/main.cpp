//
//  main.cpp
//  Test
//
//  Created by Quoc Huy Nguyen on 11/3/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>

char accept(){
    std::cout << "Do you want to proceed (y/n)>> ";
    char answer;
    std::cin >> answer;
    return answer;
}

int main(int argc, const char * argv[]) {
    
    /*switch(accept()){
        case 'y':
            std::cout << "U pick yes" << std::endl;
            break;
        case 'n':
            std::cout << "U pick no" << std::endl;
            break;
        default:
            std::cout << "U didn't pick right" << std::endl;
            
    }*/
    std:: cout << "Pointer" << std::endl;
    int x = 88;
    int y = 99;
    int* p1 = &x;
    int* p2 = &y;
    
    std::cout << "value of pointer p1: " << *p1 << ", " << "value of pointer p2: " << *p2 << std::endl;
    std::cout << "value of x: " << x << ", " << "value of y: " << y << std::endl;

    p1 = p2;
    
    std::cout << "value of pointer p1: " << *p1 << ", " << "value of pointer p2: " << *p2 << std::endl;
    std::cout << "value of x: " << x << ", " << "value of y: " << y << std::endl;
    
    std::cout << "Reference" << std::endl;
    
    int no1 = 22;
    int no2 = 33;
    int& ref1 = no1;
    int& ref2 = no2;
    
    std::cout << "Value of ref1: " << ref1 << ", " << "Value of ref2: " << ref2 << std::endl;
    std::cout << "Value of no1: " << no1 << ", " << "Value of no2: " << no2 << std::endl;
    
    ref1 = ref2;
    
    std::cout << "Value of ref1: " << ref1 << ", " << "Value of ref2: " << ref2 << std::endl;
       std::cout << "Value of no1: " << no1 << ", " << "Value of no2: " << no2 << std::endl;
    return 0;
}
