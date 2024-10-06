#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("enter any two numbers : ");
    scanf("%d%d",&num1,&num2);
    if (num1>num2){
        printf("in the given two numbers,%d is maximum\n",num1);
    }
    else if (num2>num1){
        printf("in the given two numbers,%d is maximum\n",num2);
    }
    else {
        printf("both numbers are equal");
    }

    return 0;
}
