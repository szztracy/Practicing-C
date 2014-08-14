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
    //define a 3 by 3 matrix
    int matrix[3][3] = {{4, 9, 7}, {8, 1, 0}, {2, 3, 9}};
    
    int (* matrixPointer)[3] = matrix;
    
    
    //matrix transpose
    for (int iterationI = 0; iterationI < 3; iterationI++) {
        for (int iterationJ = 0; iterationJ < iterationI; iterationJ++) {
            int t;
            t = * ( * (matrixPointer + iterationI) + iterationJ);
            * ( * (matrixPointer + iterationI) + iterationJ) = * ( * (matrixPointer + iterationJ) + iterationI);
            * ( * (matrixPointer + iterationJ) + iterationI) = t;
        }
    }
    //output matrix
    for (int iterationI = 0; iterationI < 3; iterationI++) {
        for (int iterationJ = 0; iterationJ < 3; iterationJ++) {
            printf(" %d", * ( * (matrixPointer + iterationI) + iterationJ));
        }
       printf("\n");
    }
    printf("\n");
    return 0;
}


