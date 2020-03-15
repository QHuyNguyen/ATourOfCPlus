//
//  main.cpp
//  Union
//
//  Created by Quoc Huy Nguyen on 15/3/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>

enum class Type {
    pointer = 25, reference
};
union Value{
    int a;
    int b;
};

enum Color{
    red = 100, blue, green
};

struct Entry{
    Type t;
    
    Value v;
    
    Entry(Type abc, int x, int y) : t{abc} {
        v.a = x;
        v.b = y;
    };
    
    void f(Entry* e){
        if(e->t == Type::pointer)
            std::cout << "Pointer: " << e->v.a << std::endl;
        if(e->t == Type::reference)
            std::cout << "Reference: " << e->v.b <<std::endl;
    }
};

int main(int argc, const char * argv[]) {
    Entry e{Type::reference, 4, 5};
    e.f(&e);

    Type t = Type::pointer;
    std::cout << static_cast<int>(t) << std::endl;
    
    std::cout << Color::red << std::endl;

    
    return 0;
}
