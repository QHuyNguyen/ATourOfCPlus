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

int main(int argc, const char * argv[]) {
    std::vector<int> number = {5,6,7,8,9,10};
    
    std::cout << sum(number) << std::endl;

    
    return 0;
}
