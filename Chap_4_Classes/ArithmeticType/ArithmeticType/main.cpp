//
//  main.cpp
//  ArithmeticType
//
//  Created by Quoc Huy Nguyen on 2/4/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>

class Complex{

    double number1, number2;
public:
    Complex(double a, double b) : number1{a}, number2{b}{}
    Complex(double a) : number1{a}, number2{0}{}
    Complex() : number1{0}, number2{0}{}
    
    void setNumber1(double a){
        number1 = a;
    }
    double getNumber1(){
        return number1;
    }
    
    void setNumber2(double b){
        number2 = b;
    }
    double getNumber2(){
        return number2;
    }
    
    Complex& operator+=(Complex x){
        number1 += x.number1;
        number2 += x.number2;
        return *this;
    }
    Complex& operator-=(Complex x){
        number1 -= x.number1;
        number2 -= x.number2;
        return *this;
    }
    Complex& operator*=(Complex x){
        number1 *= x.number1;
        number2 *= x.number2;
        return *this;
    }
    Complex& operator/=(Complex x){
        number1 /= x.number1;
        number2 /= x.number2;
        return *this;
    }
    
};

int main(int argc, const char * argv[]) {
    
    Complex a{5, 10};
    Complex b{2};
    b.setNumber2(8);
    
    std::cout << "Before" << std::endl;

    std::cout << a.getNumber1() << std::endl;
    std::cout << a.getNumber2() << std::endl;

    std::cout << b.getNumber1() << std::endl;
    std::cout << b.getNumber2() << std::endl;

    std::cout << "After" << std::endl;
    
    a.operator+=(b);
    b.operator*=(a);
    
    std::cout << a.getNumber1() << std::endl;
    std::cout << a.getNumber2() << std::endl;

    std::cout << b.getNumber1() << std::endl;
    std::cout << b.getNumber2() << std::endl;
    return 0;
}
