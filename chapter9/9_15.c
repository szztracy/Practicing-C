//
//  main.c
//  test2
//
//  Created by Tracy on 8/5/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>

// define three functions
void averageScoreOfCourseI (float (* studentMatrix)[5], int courseNumber);
void identifyStudent (float (*studentMatrix)[5], int studentNumber, int courseNumber);
void identifyStudent90or85 (float (*studentMatrix)[5]);

int  main()
{
    //define a matrix which stores the students' scores
    float studentMatrix [4][5] = {{90, 62, 54, 46, 100}, {70, 98, 12, 45, 91}, {88, 70, 65, 78, 90}, {77, 75, 56, 46, 85}};
    averageScoreOfCourseI (studentMatrix, 1);
    printf("\n");
    identifyStudent(studentMatrix, 4, 5);
    printf("\n");
    identifyStudent90or85 (studentMatrix);
    printf("\n");
    return 0;
}

//find out the student who's average score is above 90 or his score of each course is above 85
void identifyStudent90or85 (float (*studentMatrix)[5])
{
    int sum = 0;
    int averageScore = 0;
    int countStudentWhoHasCourseAbove85 = 0;
    for (int iterationI = 0; iterationI < 4; iterationI++) {
        for (int iterationJ = 0; iterationJ < 5; iterationJ++) {
            sum += *(*(studentMatrix + iterationI) + iterationJ);
            averageScore = sum / 5;
            if (*(*(studentMatrix + iterationI) + iterationJ) > 85) {
                countStudentWhoHasCourseAbove85 += 1;
            }
        }
        if (averageScore > 90 || countStudentWhoHasCourseAbove85 == 5) {
            printf(" the student %d has average score is above 90 or each of his course is above 80:\n", iterationI + 1);
            countStudentWhoHasCourseAbove85 = 0;
        }
    }
}

//identifyStudent is able to find out the students who fell in two courses and their total scores and average score
void identifyStudent (float (*studentMatrix)[5], int studentNumber, int courseNumber)
{
    float sum = 0;
    float averageScore = 0;
    int countStudentFail = 0;
    for (int iterationI = 0; iterationI < studentNumber; iterationI++) {
        for (int iterationJ = 0; iterationJ < courseNumber; iterationJ++) {
            if (*(*(studentMatrix + iterationI) + iterationJ) < 60) {
                countStudentFail = countStudentFail + 1;
            }
        }
        
        if (countStudentFail >= 2) {
            printf(" the student %d who has fell in two courses:\n", iterationI + 1);
            for (int iterationJ = 0; iterationJ < courseNumber; iterationJ++) {
                sum += *(*(studentMatrix + iterationI) + iterationJ);
                averageScore = sum / 5;
                printf(" %f", *(*(studentMatrix + iterationI) + iterationJ));
                
            }
            countStudentFail = 0;
            printf(" The total score for student %d is: %f", iterationI + 1, sum);
            printf(" The average score for student %d is: %f", iterationI + 1, averageScore);
            printf("\n");
        }
    }
}

//the averageScoreOfCourseI is able to find out the average score for course I
void averageScoreOfCourseI (float (* studentMatrix)[5], int courseNumber)
{
    
    float sum = 0;
    float averageScoreOfCourse = 0;
    
    for (int iteration = 0; iteration < 4; iteration++) {
        sum += *(*(studentMatrix + iteration) + (courseNumber - 1));
    }
        averageScoreOfCourse = sum / 4;
    printf(" The average Score of Course %d is: %f\n", courseNumber, averageScoreOfCourse);
}


