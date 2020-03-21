//
//  Vector.cpp
//  Modularity
//
//  Created by Quoc Huy Nguyen on 22/3/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include "Vector.hpp"

Vector::Vector(int s) : elem{new double[s]}, sz{s}{
    for(int i = 0; i < s; i++){
        elem[i] = i;
    }
}

double& Vector::operator[](int abc){
    return elem[abc];
}

int Vector::size(){
    return sz;
}


