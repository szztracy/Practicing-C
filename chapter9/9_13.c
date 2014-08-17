//
//  main.c
//  test2
//
//  Created by Tracy on 8/5/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>
#include "math.h"
double integral (double (*fun)(), double lowerLimit, double upperLimit);
int  main()
{
    //define the values of three functions of function1, function2, and function3
    double funValue1;
    double funValue2;
    double funValue3;
    //apply three functions to calculate the integral
    funValue1 = integral(sin, 0, 1);
    funValue2 = integral(cos, -1, 1);
    funValue3 = integral(exp, 0, 2);
    printf(" f1 = %f\n f2 = %f\n f3 = %f\n", funValue1, funValue2, funValue3);
    return 0;
}
//develop an alogrithm to calculate the intergation
double integral (double (*fun)(), double lowerLimit, double upperLimit)
{
    double s;
    double y = 0.0;
    int n = 100;
    double h = (upperLimit - lowerLimit) / n;
    s = ((*fun)(lowerLimit) + ((*fun)(upperLimit))) / 2.0;
    
    
    for (int iteration = 0; iteration < n; iteration++) {
        s = s + (*fun)(lowerLimit + iteration * h);
        y = s * h;
    }
    return y;
}

