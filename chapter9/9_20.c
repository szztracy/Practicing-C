//
//  main.c
//  test2
//
//  Created by Tracy on 8/5/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>
#include "string.h"
//declare the output function
void print(char *arrayAssemble[], int arrayNumber);
//declare the order function
void sort(char *arrayAssemble[], int arrayNumber);
int  main()
{
    printf("Please input five arrays:\n");
    //define array 1
    char c1;
    int lengthOfArray1;
    char array1[300];
    while ((c1 = getchar()) != '\n') {
        array1[lengthOfArray1] = c1;
        lengthOfArray1++;
    }
    //define array 2
    char c2;
    int lengthOfArray2;
    char array2[300];
    while ((c2 = getchar()) != '\n') {
        array2[lengthOfArray2] = c2;
        lengthOfArray2++;
    }
    //define array 3
    char c3;
    int lengthOfArray3;
    char array3[300];
    while ((c3 = getchar()) != '\n') {
        array3[lengthOfArray3] = c3;
        lengthOfArray3++;
    }
    //define array 4
    char c4;
    int lengthOfArray4;
    char array4[300];
    while ((c4 = getchar()) != '\n') {
        array4[lengthOfArray4] = c4;
        lengthOfArray4++;
    }
    //define array 5
    char c5;
    int lengthOfArray5;
    char array5[300];
    while ((c5 = getchar()) != '\n') {
        array5[lengthOfArray5] = c5;
        lengthOfArray5++;
    }
    
    printf("\n");
    //claim a pointerArray
    char *arrayAssemble [] = {array1, array2, array3, array4, array5};
    
    //sort the array
    sort(arrayAssemble, 5);
    
    //output the arranged array
    print(arrayAssemble, 5);
    
    return 0;
}

void sort(char *arrayAssemble[], int arrayNumber)
{
    char *temp; //used to store array temporarily
    //buble algorithm
    for (int iterationI = 0; iterationI < arrayNumber - 1; iterationI++) {
        for (int iterationJ = 0; iterationJ < arrayNumber - 1 - iterationI; iterationJ++) {
            //define a pointer which points to a pointer
            char **p;
            p = arrayAssemble;
            if (strcmp (*(p + iterationJ), *(p + iterationJ + 1)) > 0) {
                temp = *(p + iterationJ);
                *(p + iterationJ) = *(p + iterationJ + 1);
                *(p + iterationJ + 1) = temp;
            }
        }
    }
}

void print(char *arrayAssemble[], int arrayNumber)
{
    char **p;
    printf("the results:\n");
    for (int iteration = 0; iteration < arrayNumber; iteration++) {
        p = arrayAssemble + iteration;
        printf("%s\n", *p);
    }
}