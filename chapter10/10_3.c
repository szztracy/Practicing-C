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
    
};
//initialize student
struct student stu[5] = {{1, "Mac", 90.0, 87.0, 99.5}, {2, "Tracy", 99.0, 97.0, 105}, {3, "Ben", 92.0, 88.0, 99.5}, {4, "Sam", 90.0, 87.0, 92.5}, {5, "Jane", 70.0, 88.0, 90.5}};

//declare a function to print students' info
void print(struct student *studentPointer);
int  main()
{
    struct student *studentPointer;//define a pointer which points to the structure student
    studentPointer = stu;
    print(stu);
    return 0;
}

//print all students' info
void print(struct student *studentPointer)
{
    for (studentPointer = stu; studentPointer < stu + 3; studentPointer++) {
        printf("%d%8s%12f%12f%12f\n", studentPointer -> num, studentPointer -> name, studentPointer -> score[0], studentPointer -> score[1], studentPointer -> score[2]);
    }
    
}
