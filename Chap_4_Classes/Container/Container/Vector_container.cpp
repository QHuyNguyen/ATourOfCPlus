//
//  Vector_container.cpp
//  Container
//
//  Created by Quoc Huy Nguyen on 13/4/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <stdio.h>
#include "Container.cpp"

class Vector_container : public Container {
private:
    double* elem;
public:
    Vector_container(int i) : elem(new double(i)){
        for(int a = 0; a != i; a++){
            elem[a] = a+10;
        }
    }
    ~Vector_container(){
        
    }
    
    double& operator[](int s) override{
        return elem[s];
    }
    
    double size() override{
        return 0;
    }
};
