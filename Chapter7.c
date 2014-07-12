,//
//  main.c
//  test
//
//  Created by Tracy on 5/21/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>
#include <math.h>

/* Factorial Alogrithm
 int main ()
 {
 int integer;
 double factorial;
 
 double fac();
 
 printf("Please input a integer number:");
 
 scanf("%d", &integer);
 
 factorial = fac(integer);
 
 printf("%d! = %10.0f\n", integer, factorial);
 
 return 0;
 }
 
 double fac (integer)
 
 int integer;
 
 {
 double factorial;
 if (integer < 0) {
 printf(" n < 0, data error");
 }else if (integer == 0 || integer == 1){
 factorial = 1;
 }else factorial = fac(integer - 1) * integer;
 
 return factorial;
 
 }
 
 */


/* 7.11 Bubble function for arranging characters
 int main ()
 {
 char bubble ();
 char characterArray [10];
 printf("  Please input an array: ");
 
 for (int iteration = 0; iteration < 10; iteration++) {
 scanf("%c", &characterArray[iteration]);
 }
 
 bubble (characterArray);
 
 
 }
 
 
 char bubble (a)
 
 char a[10];
 
 {
 char  t;
 
 for (int iterationJ = 0; iterationJ < 9; iterationJ++) {
 
 for (int iterationK = 0; iterationK < 9  - iterationJ; iterationK++) {
 
 if (a[iterationK] >  a[iterationK + 1]) {
 t = a[iterationK];  a[iterationK] = a [iterationK + 1]; a[iterationK + 1] =t;
 }
 }
 }
 
 printf("  the sorted numbers:\n");
 
 for (int iterationJ = 0; iterationJ < 10; iterationJ++) {
 printf("  %c",a [iterationJ]);
 }
 
 printf("\n");
 return 0;
 
 }
 
 */