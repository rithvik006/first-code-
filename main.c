/**
 * @file project1
 * @brief this file contains variables and decision making statements to find whether the given number is odd or even
 * @author Rithvik
 * @date 2024-10-07
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{ //find the odd or even
    int x; //declared the number as x
    printf(" enter any number :\n");//asking user for input

    if (scanf("%d", &x) != 1) {
        printf("Error! Please enter a valid number.\n");
        return 1; // Exit the program with an error code
    }

    int n=x%2;//mathematical function to find the even odd number

    if (n==0)
    {
        printf("the given number is even");
    }//the output will be "the given number is even"
    else
    {
        printf("the given number is odd");
    } //the output will be "the given number is odd"

    return 0;
}
