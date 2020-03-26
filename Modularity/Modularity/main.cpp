//
//  main.cpp
//  Modularity
//
//  Created by Quoc Huy Nguyen on 22/3/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>
#include "Vector.hpp"
#include <cmath>

double square_sum(Vector& v){
    double sum = 0;

    for(int i = 0; i != v.size(); i++){
        sum+=sqrt(v[i]);
        std::cout << sqrt(v[i]) << std::endl;
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    
    try{
        Vector v(-5);
        std::cout << square_sum(v) << std::endl;

    }
    catch(std::length_error& err){
        std::cerr << "test failed";
    }
    
    return 0;
}
