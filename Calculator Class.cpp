//
//  Calculator Class.cpp
//  simple calculator
//
//  Created by Ruby on 11/5/22.
//  Copyright © 2022 Ruby Olivia. All rights reserved.
//

#include "Calculator Class.hpp"
double Calculator::Calculate(double x , char oper, double y)
{
    switch(oper)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            return 0.0;
    }
}

