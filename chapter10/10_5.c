//
//  main.c
//  test2
//
//  Created by Tracy on 8/5/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>
#include "string.h"

//define a struct named student
struct student
{
    int num;
    char name [20];
    float score [3];
    
}; struct student stu[5];

//declare a function to input students' info
void input(struct student *studentPointer);

int  main()
{
    struct student *studentPointer;//define a pointer which points to the structure student
    struct student *studentPointerMax;//define a pointer which points to the student who has the highest score
    studentPointer = stu;
    input(stu);//input students' info
    
    int totalScore = 0;
    int averageScore = 0;
    int max = 0;
    studentPointerMax = stu;//initiate the pointer who points to the initial position of the structure
    //calculate students' average score
    for (studentPointer = stu; studentPointer < stu + 3; studentPointer++) {
        for (int iteration = 0; iteration < 3; iteration++) {
            totalScore = studentPointer ->score[iteration] + totalScore;
        }
        averageScore = totalScore / 3;
        totalScore = 0;
        //store the student's info into a pointer named studentPointerMax
        if (averageScore > max) {
            max = averageScore;
            studentPointerMax = studentPointer;
        }
        printf("the average score is:\n");
        printf("%d\n", averageScore);
    }
    //print the student who has the highest score
    printf("%d%10s%10f%10f%10f\n", studentPointerMax ->num, studentPointerMax ->name, studentPointerMax ->score[0], studentPointerMax ->score[1], studentPointerMax ->score[2]);
    return 0;
    
}

void input(struct student *studentPointer)
{
    for (studentPointer = stu; studentPointer < stu + 3; studentPointer++) {
        scanf("%d%s%f%f%f", &(studentPointer ->num), (studentPointer ->name), &(studentPointer ->score[0]), &(studentPointer ->score[1]), &(studentPointer ->score[2]));
    }
}


