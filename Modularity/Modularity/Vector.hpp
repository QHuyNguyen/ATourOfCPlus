//
//  Vector.hpp
//  Modularity
//
//  Created by Quoc Huy Nguyen on 22/3/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#ifndef Vector_hpp
#define Vector_hpp

#include <stdio.h>

class Vector{
private:
    double* elem;
    int sz;
    
public:
    Vector(int s);
    double& operator[](int abc);
    int size();
};

#endif /* Vector_hpp */
