/**
 * @file main.c
 * @brief This file contains if-else statements to find the maximum in the given two numbers
 * @author rithvik
 * @date 2024-10-06
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{   //find the maximum in the given 2 numbers
    int num1,num2;//declared the numbers for inputs
    printf("enter any two numbers : ");//asking user for input
    scanf("%d%d",&num1,&num2);
    if (num1>num2){
        printf("in the given two numbers,%d is maximum\n",num1);
    }//output is "in the given two numbers,num1 is maximum
    else if (num2>num1){
        printf("in the given two numbers,%d is maximum\n",num2);
    }//output is "in the given two numbers,num2 is maximum
    else {
        printf("both numbers are equal");
    } //output is "both numbers are equal

    return 0;
}
