//
//  main.c
//  test
//
//  Created by Tracy on 5/21/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//



#include <stdio.h>
#include <math.h>

int greatestCommonDivisionFuc (int integer1, int integer2);
int leastCommonMultipleFuc (int integer1, int integer2);

int main ()
{
    int integer1; int integer2;
    printf("Please input two integers:\n");
    scanf("%d%d", &integer1, &integer2);
    printf("The greatest Common Division is:%d\n", greatestCommonDivisionFuc(integer1, integer2));
    printf("The least Common Multiple is:%d\n",leastCommonMultipleFuc(integer1, integer2));
    return 0;
}

int greatestCommonDivisionFuc (int integer1, int integer2)
{
    int greaterNumberBetweenInteger1AndInteger2 = integer1 > integer2 ? integer1 : integer2;
    int greatestCommonDivision = 1;
    
    for (int iteration = 1; iteration <= greaterNumberBetweenInteger1AndInteger2; iteration++ ) {
        if (integer1 % iteration == 0) {
            if (integer2 % iteration == 0) {
                if (iteration > greatestCommonDivision) {
                    greatestCommonDivision = iteration;
                }
            }
        }
    }
    return greatestCommonDivision;
}

int leastCommonMultipleFuc (int integer1, int integer2)
{
    int greaterNumberBetweenInteger1AndInteger2 = integer1 > integer2 ? integer1 : integer2;
    int leastCommonMultiple = integer1 * integer2;
    
    for (int iteration = integer1 * integer2; iteration >= greaterNumberBetweenInteger1AndInteger2 ; iteration--) {
        if (iteration % integer1 == 0) {
            if (iteration % integer2 == 0) {
                if (iteration < leastCommonMultiple) {
                    leastCommonMultiple = iteration;
                }
            }
        }
    }
    return leastCommonMultiple;
}