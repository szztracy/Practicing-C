//
//  main.c
//  test
//
//  Created by Tracy on 5/21/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//


/* 7.8
#include <stdio.h>
#include <math.h>
int main ()
{
    char array [4];
    for (int iteration = 0; iteration < 4; iteration++) {
        scanf("%c", &array[iteration]);
    }
    
    for (int iteration = 0; iteration < 4; iteration++) {
        printf("%c\n", array[iteration]);
    }
    
    int iterationJ = 0;
    for (int iterationI = 0; iterationI < 4; iterationI++) {
        array[iterationJ] = array [iterationI];
        iterationJ = iterationJ + 2;
    }
    
    for (int iterationJ = 0; iterationJ < 8; iterationJ++) {
        if (iterationJ % 2 == 0) {
            printf("%c", array[iterationJ]);
        }
        if (iterationJ % 2 != 0) {
            printf(" ");
        }
    }
    
    return 0;
}

*/