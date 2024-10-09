/**
 * @file project2
 * @brief this file contains if-else and switch statements which are used in basic calculator
 * @author rithvik
 * @date 2024-10-09
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;//basic calculator
    double a,b;

    printf("enter any operator(+,-,/,*): ");//asks user operator input
    scanf("%c",&operator);//reads the input 
    printf("enter two operands:");//asks user operands
    scanf("%lf%lf",&a,&b);//read the input

    switch(operator)
    {
        case '+' : printf("%2.lf + %2.lf = %2.lf",a,b,a+b);//addition and prints the output
        break;
        case '-' : printf("%2.lf - %2.lf = %2.lf",a,b,a-b);//subtraction and prints the output
        break;
        case '*' : printf("%2.lf * %2.lf = %2.lf",a,b,a*b);//multiplication and prints the output
        break;
        case '/' ://division and prints the output
            if (b !=0)//checks the input whether it is 0 or not 
                printf("%2.lf / %2.lf = %2.lf",a,b,a/b);
            else
                printf("error!!!,the number is divided by 0");
        break;
        default : printf("operator is not correct");//prints this output if the input is not an integer

    }



    return 0;
}
