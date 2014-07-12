,//
//  main.c
//  test
//
//  Created by Tracy on 5/21/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>
#include <math.h>

/* 5.10
int main ()
{
    int iteration;
    float xn = 0.0, xn1 = 1.0;
    
    for (iteration = 0; iteration < 10; iteration++) {
        xn1 = xn;
        xn = 2.0 * xn1 + 2.0;
    }
    
    printf("The total number of peach is: %f\n", xn);
    return 0;
    
}

 */


/* 5.13
int main ()
{
    float fm, fa, m, a = -10.0, b = 10;
    
    m = (a + b) / 2.0;
    fm = 2 * pow(m, 3) - 4 * pow(m, 2) + 3 * m - 6;
    
    while (fabs(fm) > 0.00001) {
        
        m = (a + b) / 2.0;
        fm = 2 * pow(m, 3) - 4 * pow(m, 2) + 3 * m - 6;
        fa = 2 * pow(a, 3) - 4 * pow(a, 2) + 3 * a - 6;
        
        if ((fm * fa) < 0) {
            b = m;
        }
        
        else
            a = m;
    }
    
    printf("The solution of the equation is: %f\n", m);
    
    return 0;
    
}

 */



/* 5.12
int main ()
{
    float xn, xn1;
    xn = 1.5;
    xn1 = xn - (2 * pow(xn, 3) - 4 * pow(xn, 2) + 2 * xn - 6) / (6 * pow(xn, 2) - 8 * xn + 3);
    
    while (fabs(xn - xn1) > 0.0001) {
        
        xn = xn1;
        xn1 = xn - (2 * pow(xn, 3) - 4 * pow(xn, 2) + 2 * xn - 6) / (6 * pow(xn, 2) - 8 * xn + 3);
    }
    
    printf("%f\n", xn1);
    
    return 0;
    
}

*/



/* 5.11
int main ()
{
    
    float a, xn, xn1;
    
    scanf("%f", &a);
    
    xn = 0.5 * a;
    xn1 = 0.5 * ( xn + a / xn );
    
    while (fabs(xn1 - xn) > 0.00001) {
        
        xn = xn1;
        
        xn1 = 0.5 * ( xn + a / xn );
    }
    
    
    printf("%f\n", xn1);
    
    return 0;
}

*/



/* 5.9
int main()
{
    float totalHeight = 0;
    
    for (int iteration = 1; iteration < 10 ; iteration++) {
        
        totalHeight += pow(0.5, (iteration - 1) * 1.0) * 100;
        
    }
    
    totalHeight += 100;
    
    
    printf ("The total height is: %f\n",totalHeight);
    
    return 0;
}
 
*/



/*  5.14
void printSpacesAndStars (int iterationRowNumber);

int main ()
{

    //display first 4 rows
    for (int iterationRowNumber = 0; iterationRowNumber <= 3; iterationRowNumber++) {
        
        printSpacesAndStars(iterationRowNumber);
    }
    
    //display last 4 rows
    for (int iterationRowNumber = 2; iterationRowNumber >= 0; iterationRowNumber--) {
        
        printSpacesAndStars(iterationRowNumber);
    }
    
    return 0;
}

void printSpacesAndStars (int iterationRowNumber)
{
    for (int iterationSpace = 0; iterationSpace < 3 - iterationRowNumber; iterationSpace++) {
        printf("_");
    }
    
    for (int iterationStar = 0; iterationStar < 2 * iterationRowNumber + 1; iterationStar++) {
        printf("*");
    }
    printf("\n");
}

*/