//
//  main.c
//  test
//
//  Created by Tracy on 7/16/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define S(a,b,c) 0.5 * (a + b + c)
#define area(a,b,c) S(a,b,c) * (S(a,b,c) - a) * (S(a,b,c) - b) * (S(a,b,c) - c)
int  main()
{
    int a; int b; int c;
    scanf("%d%d%d", &a, &b, &c);
    printf("S = %f\n, area=%f\n", S(a,b,c), area(a,b,c));
    return 0;
    
}