//
//  main.c
//  test
//
//  Created by Tracy on 5/21/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//



#include <stdio.h>
#include <math.h>

#warning Change Compacity of Arrays here
#define CompacityOfArray 300

int main ()
{
    static char inputArray[CompacityOfArray]; //Input a Hex
    int length = 0;
    int sum = 0;
    char c = '0';
    while (c != '\n') {
        c = getchar();
        inputArray[length] = c;
        length++;
    }
    
    length--;
   
    //Translate Hex to Decimal
    for (int iteration = 0; iteration < length; iteration++) {
        if (inputArray[iteration] > 47 && inputArray[iteration] < 58 ) {
            inputArray[iteration] -= 48;
        }else if (inputArray[iteration] > 64 && inputArray[iteration] < 71)
            inputArray[iteration] -= 55;
        else
            printf("Error Input!\n");
        sum += inputArray[iteration] * pow(16, length - iteration - 1);
    }
    printf("%d\n", sum);
    return 0;
}
