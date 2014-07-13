//
//  main.c
//  test
//
//  Created by Tracy on 5/21/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

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



/* void copySecondArrayToFirstArray (char array1[], char array2[], int length1, int length2);

int main ()
{
    char array1 [300], array2 [300];
    int lengthOfArray1, lengthOfArray2;
    int iterationI = 0, iterationJ = 0;
    
    printf("  Please input the first array:");
    do {
        scanf("%c", &array1[iterationI]);
        iterationI++;
    } while (array1[iterationI - 1] != '\0');
    

    printf("  Please input the second array:");
    do {
        scanf("%c", &array2[iterationJ]);
        iterationJ++;
    } while (array2[iterationJ] != '\0');

    copySecondArrayToFirstArray(array1, array2, lengthOfArray1, lengthOfArray2);
    
    return 0;
}

void copySecondArrayToFirstArray (char array1[], char array2[], int length1, int length2)
{
  for (int iteration = 0; iteration < (length1 + length2); iteration++) {
    if (iteration < length1) {
        printf("%c", array1[iteration]);
    }
    
    if (iteration > length1) {
        printf("%c", array2[iteration - length1]);
        
    }
  }
}
*/
