//
//  main.cpp
//  Function
//
//  Created by Quoc Huy Nguyen on 10/3/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>

double square(double x){
    return x * x;
}

void print_square(double x){
    std::cout << square(x) << std::endl;
}

int count_x(const char* p, char x){
    if(p==nullptr)
        return 0;
    int count = 0;
    while(*p){
        if(*p == x)
            count++;
        p++;
    }
    return count;
}

int main(int argc, const char * argv[]) {

    //int x {5};
    //print_square(x);
    
    
    /*int a[10] = {5, 10, 22, 33, 44, 55, 23, 435, 1324, 543};
    int* b = a;
    
    int x = 5;
    int* y = &x;
    int& z = x;
    ++z;
    
    std::cout << *y << std::endl;
    std::cout << z << std::endl;
    
    for(int i = 0; i <= 5; i++){
        std::cout << *b+i << std::endl;
    }
    
    for(int i = 0; i <= 5; i++){
        std::cout << *(b + i) << std::endl;
    }
    
    for(auto& x : a){
        std::cout << a << std::endl;

        std::cout << x << std::endl;
    }*/
    
    std::cout << count_x("Hello", 'l') << std::endl;

    return 0;
}
