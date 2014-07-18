,//
//  main.c
//  test
//
//  Created by Tracy on 5/21/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>
#include <math.h>


/* 6.2
 int main ()
 {
 printf("Please input 10 numbers:");
 static int num [10];
 
 for (int iteration = 0; iteration < 10; iteration++) {
 scanf("%d",&num[iteration]);
 }
 
 int max, t, maxColumn = 0;
 
 for (int iterationI = 0; iterationI < 9; iterationI++) {
 max = num [iterationI];
 
 for (int iterationJ = iterationI + 1; iterationJ < 10; iterationJ++) {
 
 if (num [iterationJ] > max) {
 
 max = num [iterationJ];
 
 maxColumn = iterationJ;
 }
 
 }
 
 t =  num [iterationI]; num [iterationI] = num [maxColumn]; num[maxColumn] = t;
 
 }
 
 for (int iteration = 0; iteration < 10; iteration++) {
 printf("%d \n",num[iteration]);
 }
 
 return 0;
 
 }
 
*/


/* 6.3
 int main ()
 {
 static int num [3][3];
 int sum = 0;
 
 printf("Please input a matrix:");
 
 for (int iterationI = 0; iterationI < 3; iterationI++) {
 
 for (int iterationJ = 0; iterationJ < 3; iterationJ++) {
 scanf("%d", &num[iterationI][iterationJ]);
 }
 }
 
 
 for (int iterationI = 0; iterationI < 3; iterationI++) {
 
 for (int iterationJ = 0; iterationJ < 3; iterationJ++) {
 
 if (iterationI == iterationJ) {
 sum = sum + num [iterationI][iterationJ];
 }
 
 }
 }
 
 printf("%d\n",sum);
 
 return 0;
 }
 
 
 */

/* 6.5
 int main ()
 {
 int number;
 printf("Please input the number of inputs:\n");
 scanf("%d",&number);
 
 static int num [200];
 printf("Please input numbers:");
 
 for (int iteration = 0; iteration < number; iteration++) {
 scanf("%d",&num[iteration]);
 }
 
 for (int iteration = 0; iteration < number; iteration++) {
 printf("%d \n", num[number - iteration - 1]);
 }
 
 return 0;
 
 
 }
 
 */


/* 6.6 (Yang Hui's Triangle)
 int main ()
 {
 int num[10][10];
 
 for (int iterationI = 0 ; iterationI < 10; iterationI++) {
 for (int iterationJ = 0; iterationJ <= iterationI; iterationJ++) {
 
 if (iterationI == 0) {
 num[iterationI][iterationJ] = 1;
 printf("%6d\n",num[iterationI][iterationJ]);
 } else if (iterationJ == 0){
 num[iterationI][iterationJ] = 1;
 printf("%6d",num[iterationI][iterationJ]);
 } else if (iterationI == iterationJ){
 num[iterationI][iterationJ] = 1;
 printf("%6d",num[iterationI][iterationJ]);
 printf("\n");
 
 } else{
 num[iterationI][iterationJ] = num[iterationI - 1][iterationJ - 1] + num[iterationI - 1][iterationJ];
 printf("%6d",num[iterationI][iterationJ]);
 }
 }
 }
 
 return 0;
 
 }
 
 */

/* 6.8 (SaddlePoint)
 int main ()
 {
 printf("Please input a 3 X 4 matrix here:");
 int matrix[3][4];
 
 for (int iterationI = 0; iterationI < 3; iterationI++) {
 for (int iterationJ = 0; iterationJ < 4; iterationJ++) {
 scanf("%d", &matrix[iterationI][iterationJ]);
 }
 }
 
 for (int iterationI = 0; iterationI < 3; iterationI++) {
 for (int iterationJ = 0; iterationJ < 4; iterationJ++) {
 printf("%4d", matrix[iterationI][iterationJ]);
 }
 printf("\n");
 }
 
 int maxInRow = 0, minInColumn = 0, maxColumn = 0;
 
 for (int iterationI = 0; iterationI < 3; iterationI++) {
 
 maxInRow = matrix[iterationI][0];
 
 for (int iterationJ = 1; iterationJ < 4; iterationJ++) {
 if (matrix[iterationI][iterationJ] > maxInRow) {
 maxInRow = matrix [iterationI][iterationJ];
 maxColumn = iterationJ;
 
 }
 
 }
 
 minInColumn = matrix[0][maxColumn];
 
 for (int iterationK = 0; iterationK < 3; iterationK++) {
 if (matrix[iterationK][maxColumn] < minInColumn) {
 minInColumn = matrix[iterationK][maxColumn];
 }
 
 }
 if (maxInRow == minInColumn) {
 printf("The saddle point is: %d\n", maxInRow);
 }
 
 }
 return 0;
 }
 
 */



/* Bubble Algorithm
 int main ()
 {
 int a [9];
 int iterationIput, iterationJ, iterationK, t;
 
 printf("Please input 10 numbers:");
 for (iterationIput = 0; iterationIput < 10; iterationIput++) {
 
 scanf("%d",& a[iterationIput]);
 
 }
 printf("\n");
 
 for (iterationJ = 0; iterationJ < 9; iterationJ++) {
 
 for (iterationK = 0; iterationK < 9  - iterationJ; iterationK++) {
 
 if (a[iterationK] > a[iterationK + 1]) {
 t = a[iterationK];  a[iterationK] = a [iterationK + 1]; a[iterationK + 1] =t;
 }
 }
 }
 
 printf(" the sorted numbers:\n");
 
 for (iterationJ = 0; iterationJ < 10; iterationJ++) {
 printf("%d \n",a [iterationJ]);
 }
 return 0;
 
 
 }
 
 */


/* Matrix Transpose
 int main ()
 {
 static int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
 static int b[3][2];
 
 
 int iterationI, iterationJ;
 
 printf("array a:\n");
 
 for (iterationI = 0; iterationI < 2; iterationI++) {
 
 for (iterationJ = 0; iterationJ < 3; iterationJ++) {
 b[iterationJ][iterationI] = a[iterationI][iterationJ];
 }
 
 printf("\n");
 }
 
 printf("array b:\n");
 
 for (iterationI = 0; iterationI < 3; iterationI++) {
 for (iterationJ = 0; iterationJ < 2; iterationJ++) {
 printf("%5d", b[iterationI][iterationJ]);
 
 }
 printf("\n");
 }
 
 
 return 0;
 }
 
 */


/* 6.11
 int main ()
 {
 for (int iterationI = 0; iterationI < 5; iterationI++) {
 
 for (int iterationJ = 0; iterationJ < iterationI; iterationJ++) {
 
 printf(" ");
 
 }
 for (int iterationK = 0; iterationK < 5; iterationK++) {
 printf("*");
 }
 printf("\n");
 
 }
 return 0;
 
 }
 
 */

/* 6.13
#define CapacityOfArray 300
int main ()
{
    char Array[CapacityOfArray];//input an array
    int lengthOfArray = 0;
    
    printf("Please input an array:\n");
    char c = '0';
    while (c != '\n') {
        Array[lengthOfArray] = c;
        c = getchar();
        lengthOfArray++;
    }
    lengthOfArray--;
    printf("Result:\n");
    // translate A to Z, B to Y, a to z, b to y and so on. Keep other letters the same with inputs
    for (int iteration = 1; iteration <= lengthOfArray; iteration++) {
        if ((Array[iteration] > 64 && Array[iteration] < 91)) {
            Array[iteration] = 155 - Array[iteration];
        }
        if (Array[iteration] > 96 && Array[iteration] < 123) {
            Array[iteration] = 219 - Array[iteration];
        }
        printf("%c", Array[iteration]);
    }
    printf("\n");
    return 0;
}

 */

