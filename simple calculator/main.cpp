//
//  main.cpp
//  simple calculator
//
//  Created by Ruby on 11/5/22.
//  Copyright © 2022 Ruby Olivia. All rights reserved.
//
#include <iostream>
#include "Calculator Class.hpp"
using namespace std;


int main(int argc, const char * argv[])
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    
    cout << "Calculator console application" << "\n\n";
    cout << "Please enter the operation to perform. Use format a+b, a-b, a*b, a/b: " << "\n";
    
    Calculator c;
    while (true)
    {
    
        cin >> x >> oper >> y;
        result = c.Calculate(x, oper, y);
        cout << "Result is: " << result << "\n";
    }
    return 0;
    

};
