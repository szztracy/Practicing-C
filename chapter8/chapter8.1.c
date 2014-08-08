//
//  main.c
//  test
//
//  Created by Tracy on 7/16/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define exchange(a,b,t) t = a; a = b; b = t; //exchange a and b;
int  main()
{
    float a; float b; float t;
    scanf("%f%f", &a, &b);
    exchange(a,b,t);
    printf("a = %f, b=%f\n", a, b);
    return 0;
    
}