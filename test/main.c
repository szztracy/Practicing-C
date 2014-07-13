//
//  main.c
//  test
//
//  Created by Tracy on 5/21/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>
#include <math.h>
void func1(double a, double b, double c);
double func2(double a, double b, double c);
double func3x1(double a, double b, double c);
double func3x2(double a, double b, double c);
int main ()
{
    double a, b, c;
    printf("Please input three parameters such as a, b, c:\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    if ((pow(b, 2) - 4 * a * c) < 0) {
        func1(a, b, c);
    }
    if ((pow(b, 2) - 4 * a * c) == 0) {
        printf("The solution is:%lf\n",func2(a, b, c));
    }
    if ((pow(b, 2) - 4 * a * c) > 0) {
        printf("The first solutions is:%lf\n", func3x1(a, b, c));
    }
    if ((pow(b, 2) - 4 * a * c) > 0) {
        printf("The second solutions is:%lf\n", func3x2(a, b, c));
    }
    return 0;

}
void func1(double a, double b, double c)
{
    printf("There is no solution!\n");
}

double func2(double a, double b, double c)
{
    double x1 = 0;
    x1 = (-1 * b) / 2 * a;
    return x1;
}

double func3x1(double a, double b, double c)
{
    double x1 = 0;
    x1 = (-1 * b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    return x1;
  
}

double func3x2(double a, double b, double c)
{
    double x2 = 0;
    x2 = (-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    return x2;
    
}
