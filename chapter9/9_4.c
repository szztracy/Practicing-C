//
//  main.c
//  test2
//
//  Created by Tracy on 8/5/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>

int  main()
{
    //define an arrayA as an orignial array
    int arrayA[300];
    
    //define an arrayB to store elements in arrayA when rearrange arrayA
    int arrayB[300];
    
    //define two pointers point arrayA and arrayB
    int *arrayAPointer;
    int *arrayBPointer;
    arrayAPointer = arrayA;
    arrayBPointer = arrayB;
    
    //input an arrayA
    printf(" Please decide how many elements you want to input:");
    int inputTotal;
    scanf("%d", &inputTotal);
    for (int iteration = 0; iteration < inputTotal; iteration++) {
        scanf("%d",(arrayAPointer + iteration));
    }
    
    //store the unremovable elements in arrayB
    printf(" Please decide how many elements you want to remove to the end of the arrayA:");
    int removeElement;
    scanf("%d", &removeElement);
    for (int iteration = 0; iteration < inputTotal - removeElement; iteration++) {
        *(arrayBPointer + iteration) = *(arrayAPointer + iteration);
    }
 
    //move the removeable elements to the front of arrayA
    for (int iteration = 0; iteration < removeElement; iteration++) {
        *(arrayAPointer + iteration) = *(arrayAPointer + inputTotal - removeElement + iteration);
    }
    for (int iteration = removeElement; iteration < inputTotal; iteration++) {
        *(arrayAPointer + iteration) = arrayB[iteration - removeElement];
    }
    
    //output the arranged arrayA
    printf(" the new arranged array is:");
    for (int iteration = 0; iteration < inputTotal; iteration++) {
        printf("% d", *(arrayAPointer + iteration));
    }
    printf("\n");
    return 0;
}


