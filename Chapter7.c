,//
//  main.c
//  test
//
//  Created by Tracy on 5/21/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>
#include <math.h>



/* 7.14
#include <stdio.h>
#include <math.h>

# define numberOfStudent 300
# define numberOfCourse 300
double averageScoreDeviationFuc (double studentScore [300][300]);
int studentWhoHasMaxScoreFuc (double studentScore[300][300]);
int main ()
{
    double averageScoreDeviation = 0;
    int studentNumberWhoHasMaxScore = 0;
    double studentScore[numberOfStudent][numberOfCourse];
    for (int studentNumber = 1; studentNumber <= 10; studentNumber++) {
        for (int courseNumber = 1; courseNumber <= 5; courseNumber++) {
            scanf("%lf", &studentScore[studentNumber][courseNumber]);
        }
    }
    
    averageScoreDeviation = averageScoreDeviationFuc(studentScore);
    studentNumberWhoHasMaxScore = studentWhoHasMaxScoreFuc(studentScore);
    printf("The averageScoreDeviation is: %lf\n",averageScoreDeviation);
    printf(" The student who has the maximum score is: %d\n",studentNumberWhoHasMaxScore);
    
}

double averageScoreDeviationFuc (double studentScore [300][300])

{
    double averageScoreDeviation = 0;
    double averageScorePerStudent [numberOfStudent];
    for (int studentNumber = 1; studentNumber <= 10; studentNumber++) {
        double averageScoreOfStudent = 0;
        double sum = 0;
        double sumPower = 0;
        for (int courseNumber = 1; courseNumber <= 5; courseNumber++) {
            
            averageScoreOfStudent = studentScore[studentNumber][courseNumber] / 5 + averageScoreOfStudent;
        }
        averageScorePerStudent [studentNumber]= averageScoreOfStudent;
        sum = sum + averageScorePerStudent[studentNumber];
        sumPower = sumPower + pow(averageScorePerStudent[studentNumber], 2.0);
        averageScoreDeviation = sumPower / 10.0 - pow(sum / 10, 2.0);
        
    }
    return averageScoreDeviation;
}

int studentWhohasMaxScoreFuc (double studentScore[300][300])
{
    double max;
    int studentWhoHasMaxScore = 0;
    int courseThatHasMaxScore = 0;
    max = studentScore[0][0];
    for (int studentNumber = 0; studentNumber <= 10; studentNumber++) {
        for (int courseNumber = 0; courseNumber <= 5; courseNumber++) {
            if (studentScore[studentNumber][courseNumber] > max) {
                max = studentScore[studentNumber][courseNumber];
                studentWhoHasMaxScore = studentNumber;
                courseThatHasMaxScore = courseNumber;
            }
        }
    }
    return studentWhoHasMaxScore;
}
 
*/

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