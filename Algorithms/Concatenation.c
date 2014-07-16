//
//  main.c
//  test
//
//  Created by Tracy on 7/16/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>

#define capacityOfArray 300
int main(int argc, const char * argv[])
{
    char arrayA[capacityOfArray];
    char arrayB[capacityOfArray];
    
    printf("Please input arrayA:\n");
    char c1 = '0';
    int lengthOfArrayA = 0;
    while (c1 != '\n') {
        arrayA [lengthOfArrayA] = c1;
        c1 = getchar();
        lengthOfArrayA++;
    }
    
    printf("Please input arrayB:\n");
    char c2 = '0';
    int lengthOfArrayB = 0;
    while (c2 != '\n') {
        arrayB [lengthOfArrayB] = c2;
        c2 = getchar();
        lengthOfArrayB++;
    }
    
    lengthOfArrayA--;
    lengthOfArrayB--;
    
    printf("The length of arrayA:%d\n", lengthOfArrayA);
    printf("The length of arrayB:%d\n", lengthOfArrayB);
    
    for (int iteration = 1; iteration <= lengthOfArrayB ; iteration++) {
        arrayA[iteration + lengthOfArrayA] = arrayB[iteration];
    }
    
    printf("Result:\n");
    for (int iteration = 1; iteration <= lengthOfArrayA + lengthOfArrayB; iteration++) {
        printf("%c",arrayA[iteration]);
    }
    printf("\n");
    return 0;
}

