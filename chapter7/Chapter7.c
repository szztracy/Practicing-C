,//
//  main.c
//  test
//
//  Created by Tracy on 5/21/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>
#include <math.h>

/* 7.2 Solve Quadratic Function
#include <stdio.h>
#include <math.h>
void func1(double a, double b, double c);
double func2(double a, double b, double c);
double func3x1(double a, double b, double c);
double func3x2(double a, double b, double c);
int main ()
{
    double a, b, c;
    printf("Please input three parameters such as a, b, c:\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    if ((pow(b, 2) - 4 * a * c) < 0) {
        func1(a, b, c);
    }
    if ((pow(b, 2) - 4 * a * c) == 0) {
        printf("The solution is:%lf\n",func2(a, b, c));
    }
    if ((pow(b, 2) - 4 * a * c) > 0) {
        printf("The first solutions is:%lf\n", func3x1(a, b, c));
    }
    if ((pow(b, 2) - 4 * a * c) > 0) {
        printf("The second solutions is:%lf\n", func3x2(a, b, c));
    }
    return 0;
    
}
void func1(double a, double b, double c)
{
    printf("There is no solution!\n");
}

double func2(double a, double b, double c)
{
    double x1 = 0;
    x1 = (-1 * b) / 2 * a;
    return x1;
}

double func3x1(double a, double b, double c)
{
    double x1 = 0;
    x1 = (-1 * b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    return x1;
    
}

double func3x2(double a, double b, double c)
{
    double x2 = 0;
    x2 = (-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    return x2;
    
}

*/

/* ReverseMatrix 7.4
 #include <stdio.h>
 
 int main ()
 {
 double matrix [3][3];
 double t = 0;
 for (int row = 0; row < 3; row++) {
 for (int column = 0; column < 3; column++) {
 scanf("%lf",&matrix[row][column]);
 }
 }
 
 for (int row = 0; row < 3; row++) {
 for (int column = 0; column < row; column++) {
 if (row != column) {
 t = matrix[row][column]; matrix[row][column] = matrix[column][row]; matrix[column][row] = t;
 }
 }
 }
 
 for (int row = 0; row < 3; row++) {
 for (int column = 0; column < 3; column++) {
 printf(" %lf", matrix[row][column]);
 }
 printf("\n");
 }
 return 0;
 }
 
*/

/* 7.5 Reverse Array
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
    printf("The reversed array is:\n");
    for (int iteration = lengthOfArray; iteration >= 1;iteration--) {
        printf("%c", array[iteration]);
    }
    printf("\n");
    return 0;
}
*/

/* 7.7
#define CapacityOfArray 300
int main ()
{
    char Array1 [CapacityOfArray]; //Input the first array
    char Array2 [CapacityOfArray];// Input the second array
    int lengthOfArray1 = 0;
    int lengthOfArray2 = 0;
    
    printf("Please input the first array:\n");
    char c1 = '0';
    while (c1 != '\n') {
        Array1[lengthOfArray1] = c1;
        c1 = getchar();
        lengthOfArray1++;
    }
    
    printf("Please input the second array:\n");
    char c2 = '0';
    while (c2 != '\n') {
        Array2[lengthOfArray2] = c2;
        c2 = getchar();
        lengthOfArray2++;
    }
    lengthOfArray1--;
    lengthOfArray2--;
    
    char Array3 [CapacityOfArray];// Create the third array
    
    // Copy the vowel letters to the third array
    int lengthOfArray3 = 1;
    
    for (int iteration = 1; iteration <= lengthOfArray2; iteration++) {
        if (Array2[iteration] == 65 || Array2[iteration] == 69 || Array2[iteration] == 73 || Array2[iteration] == 79 || Array2[iteration] == 85 || Array2[iteration] == 97 || Array2[iteration] == 101 || Array2[iteration] == 105 || Array2[iteration] == 111 || Array2[iteration] == 117) {
            Array3[lengthOfArray3] = Array2[iteration];
            lengthOfArray3++;
        }
    }
    lengthOfArray3--;
    
    //Copy the third array to the first array
    for (int iteration = 1; iteration <= lengthOfArray3; iteration++) {
        Array1[lengthOfArray1 + iteration] = Array3[iteration];
    }
    
    //Output the first array
    printf("Results:\n");
    for (int iteration = 1; iteration <= lengthOfArray1 + lengthOfArray3; iteration++) {
        printf("%c", Array1[iteration]);
    }
    
    printf("\n");
}

*/

/* 7.8
 #include <stdio.h>
 #include <math.h>
 int main ()
 {
 char array [4];
 for (int iteration = 0; iteration < 4; iteration++) {
 scanf("%c", &array[iteration]);
 }
 
 for (int iteration = 0; iteration < 4; iteration++) {
 printf("%c\n", array[iteration]);
 }
 
 int iterationJ = 0;
 for (int iterationI = 0; iterationI < 4; iterationI++) {
 array[iterationJ] = array [iterationI];
 iterationJ = iterationJ + 2;
 }
 
 for (int iterationJ = 0; iterationJ < 8; iterationJ++) {
 if (iterationJ % 2 == 0) {
 printf("%c", array[iterationJ]);
 }
 if (iterationJ % 2 != 0) {
 printf(" ");
 }
 }
 
 return 0;
 }
 
*/

/* 7.13 Legendre Function
 #include <stdio.h>
 #include <math.h>
 
 double LegendreFunction (int n, double x);
 int main ()
 {
 int n;
 double x;
 printf("Please input parameter of Legendre functions n and x:\n");
 scanf("%d\n",&n);
 printf("The solution is:%lf\n", LegendreFunction(n, x));
 return 0;
 }
 
 double LegendreFunction (int n, double x)
 {
 double Pn = 0;
 if (n == 0) {
 Pn = 1;
 }else if (n == 1)
 Pn = x;
 else if (n > 1)
 Pn = LegendreFunction(n-1, x) * x * (2 * n - 1) - (n - 1) * LegendreFunction(n-2, x) / n;
 return Pn;
 
 }
 
*/

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
   return 0; 
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


/* 7.12 NewtonRaphsonAlgorithm

#include <stdio.h>
#include <math.h>

double NewtonRaphsonAlgorithm (double a, double b, double c, double d);

int main ()
{
    double a, b, c, d;
    printf("Please input parameters of the function a, b, c, d:\n");
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    printf("The solution is:%lf\n", NewtonRaphsonAlgorithm(a, b, c, d));
    return 0;
}


double NewtonRaphsonAlgorithm (double a, double b, double c, double d)
{
    float xn, xn1;
    xn = 1;
    xn1 = xn - (a * pow(xn, 3) + b * pow(xn, 2) + c * xn + d) / (3 * a * pow(xn, 2) + 2 * b * xn + c);
    
    while (fabs(xn - xn1) > 0.0001) {
        
        xn = xn1;
        xn1 = xn - (a * pow(xn, 3) + b * pow(xn, 2) + c * xn + d) / (3 * a * pow(xn, 2) + 2 * b * xn + c);
    }
    
    
    return xn1;
    
}

*/