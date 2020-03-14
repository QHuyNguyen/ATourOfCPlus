//
//  main.cpp
//  Structures
//
//  Created by Quoc Huy Nguyen on 15/3/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>

struct Vector{

    int size;
    double* elem;
    
    void Vector_init(Vector& v, int s){
        v.elem = new double[s];
        size = s;
    }
    
    double read_and_sum(Vector& v){
        double count{0.0};
        for(int i = 0; i < size; i++){
            std::cin >> v.elem[i];
        }
        
        for(int i = 0; i < size; i++){
            count += v.elem[i];
        }
        
        return count;
    }
};

int main(int argc, const char * argv[]) {
    
    Vector v;
    v.Vector_init(v, 5);
    double sum = v.read_and_sum(v);
    std::cout << *(v.elem) << std::endl;
    std::cout << v.size << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    
    return 0;
}
