//
//  main.cpp
//  Union
//
//  Created by Quoc Huy Nguyen on 15/3/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>

enum Type {
    pointer, reference
};
union Value{
    int a;
    int b;
};

struct Entry{
    Type t;
    
    Value v;
    
    Entry(Type abc, int x, int y) : t{abc} {
        v.a = x;
        v.b = y;
    };
    
    void f(Entry* e){
        if(e->t == pointer)
            std::cout << "Pointer: " << e->v.a << std::endl;
        if(e->t == reference)
            std::cout << "Reference: " << e->v.b <<std::endl;
    }
};

int main(int argc, const char * argv[]) {
    Entry e{reference, 4, 5};
    e.f(&e);
    return 0;
}
