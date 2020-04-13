//
//  main.cpp
//  Container
//
//  Created by Quoc Huy Nguyen on 13/4/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>
#include "Vector.cpp"
#include "Vector_container.cpp"

int main(int argc, const char * argv[]) {
    Vector v(10);
    std::cout << v[1] << std::endl;
    std::cout << "----------------" << std::endl;
    
    Vector_container vc(10);
    std::cout << vc[2] << std::endl;

    return 0;
}
