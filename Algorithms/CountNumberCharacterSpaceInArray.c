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
    char array[capacityOfArray];
    
    printf("Please input array:\n");
    char c = '0';
    int lengthOfArray = 0;
    while (c != '\n') {
        array [lengthOfArray] = c;
        c = getchar();
        lengthOfArray++;
    }
    
    lengthOfArray--;
    
    int numberOfSpace = 0;
    int numberOfDigital = 0;
    int numberOfLetter = 0;
    int numberOfOtherCharacters = 0;
    for (int iteration = 1; iteration <= lengthOfArray; iteration++) {
        if (array[iteration] == 32) {
            numberOfSpace++;
        }else if (array[iteration] > 47 && array[iteration] < 58)
            numberOfDigital++;
        else if ((array[iteration] > 64 && array[iteration] < 91) || (array[iteration] > 96 && array[iteration] < 123))
            numberOfLetter++;
        else
            numberOfOtherCharacters++;
    }
    
    printf("The number of space is:%d\n", numberOfSpace);
    printf("The number of Digital is:%d\n", numberOfDigital);
    printf("The number of Letter is:%d\n", numberOfLetter);
    printf("The number of other characters is:%d\n", numberOfOtherCharacters);
    return 0;
}

