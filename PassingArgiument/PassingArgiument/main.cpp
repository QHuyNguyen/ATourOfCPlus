//
//  main.cpp
//  PassingArgiument
//
//  Created by Quoc Huy Nguyen on 26/3/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>
#include <vector>

int sum(const std::vector<int>& abc){
    int sum = 0;
    for(const int a : abc)
        sum+=a;
    return sum;
};

void test(std::vector<int> a, std::vector<int>& b){
    a[0] = 2;
    b[1] = 3;
}

int main(int argc, const char * argv[]) {
    std::vector<int> number = {5,6,7,8,9,10};
    
    std::vector<int> no = {1,2,3,4};
    test(no, no);
    
    std::cout << sum(number) << std::endl;
    
    std::cout << no[0] << ", " << no[1] << std::endl;
    
    
    return 0;
}
