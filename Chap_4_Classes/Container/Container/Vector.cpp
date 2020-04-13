//
//  Vector.cpp
//  Container
//
//  Created by Quoc Huy Nguyen on 13/4/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <stdio.h>
#include <iostream>

class Vector{
private:
    double* elem;
    int sz;
public:
    Vector(int i) : elem{new double[i]}, sz{i}{
        for(int a = 0; a < i; a++){
            elem[a] = a+1;
        }
    }
    ~Vector(){
        delete[] elem;
        std::cout << "Delete elem" << std::endl;
    }
    
    double& operator[](int i){
        return elem[i];
    }
    int size() const;
};
