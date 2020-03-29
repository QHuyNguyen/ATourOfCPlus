//
//  main.cpp
//  Assertion
//
//  Created by Quoc Huy Nguyen on 28/3/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>



void test_assertion(int* number){
    assert(number!=NULL);
    std::cout << "Number: " << *number << std::endl;
}

int main(int argc, const char * argv[]) {
    int number = 10;
    
    int* a = NULL;
    int* b = NULL;
    
    a = &number;
    
    test_assertion(a);
    test_assertion(b);
    
    return 0;
}
