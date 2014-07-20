//
//  main.c
//  test
//
//  Created by Tracy on 7/16/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//


 int main ()
{
    int number; //input a number
    int countNumber = 0;
    printf("Please input a integer:\n");
    scanf ("%d", &number);
    
    for (int iteration = 2; iteration < number; iteration++) {
        if (number % iteration == 0) {
            countNumber++;
        }
        
    }
    if (countNumber == 0) {
        printf("The number is a prime:\n");
    }
    else
        printf("The number is NOT a prime:\n");
    return 0;
   }

