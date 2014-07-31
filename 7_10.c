//
//  main.c
//  Chapter 7
//
//  Created by Mac Wang on 7/23/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>

#define MAX_LENTH_OF_ARRAY 100


int ifInputIsALetter(char a);

int main(int argc, const char * argv[])
{

    
    char input[MAX_LENTH_OF_ARRAY];
    int max = 0; //max length
    
    // pointers
    int header = 0; // mark the beginning of a word
    int tail = 0; // mark the end of a word
    int maxTail = 0; // record begnning position of the word with max length
    
    //input
    char currentInputChar;
    int lenghtOfInput = 0;
    while ((currentInputChar = getchar()) != '\n') {
        input[lenghtOfInput] = currentInputChar;
        lenghtOfInput++;
    }
    printf("Characters captured: %d\n", lenghtOfInput);
    
    //
    for (int iteration = 0; iteration < lenghtOfInput; iteration++) {
        
        if (ifInputIsALetter(input[iteration])) {
            //if it is a letter
            
            tail++;
            
            if(tail - header > max)
            {
                max = tail - header;
                maxTail = tail;
            }
            
        } else {
            //if it is NOT a letter

            header = tail + 1;
            tail = header;
        }
        
        
    }
    
    //output the longest word
    int maxHeader = maxTail - max;
    
    for (int iteration = maxHeader; iteration < maxTail; iteration++) {
        printf("%c", input[iteration]);
    }
    
    printf("\n");
    return 0;
}

int ifInputIsALetter(char a)
{
    if (a > 64 && a < 91) {
        return 1;
    } else if (a > 96 && a < 123){
        return 1;
    } else return 0;
}







