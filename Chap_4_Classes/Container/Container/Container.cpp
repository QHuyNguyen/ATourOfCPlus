//
//  Container.cpp
//  Container
//
//  Created by Quoc Huy Nguyen on 13/4/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <stdio.h>

class Container{
public:
    virtual ~Container(){};
    virtual double& operator[](int) = 0;
    virtual double size() = 0;
};
