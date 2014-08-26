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
//declare a function to print students' info
void print(struct student *studentPointer);
int  main()
{
    struct student *studentPointer;//define a pointer which points to the structure student
    studentPointer = stu;
    input(stu);
    print(stu);
    return 0;
    
}

void input(struct student *studentPointer)
{
    for (studentPointer = stu; studentPointer < stu + 3; studentPointer++) {
        scanf("%d%s%f%f%f", &(studentPointer ->num), (studentPointer ->name), &(studentPointer ->score[0]), &(studentPointer ->score[1]), &(studentPointer ->score[2]));
    }
}

void print(struct student *studentPointer)
{
    for (studentPointer = stu; studentPointer < stu + 3; studentPointer++) {
        printf("%d%20s%20f%20f%20f", studentPointer ->num, studentPointer ->name, studentPointer ->score[0], studentPointer ->score[1], studentPointer ->score[2]);
        printf("\n");
    }
}

