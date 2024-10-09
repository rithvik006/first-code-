#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    double a,b;

    printf("enter any operator(+,-,/,*): ");
    scanf("%c",&operator);
    printf("enter two operands:");
    scanf("%lf%lf",&a,&b);

    switch(operator)
    {
        case '+' : printf("%2.lf + %2.lf = %2.lf",a,b,a+b);
        break;
        case '-' : printf("%2.lf - %2.lf = %2.lf",a,b,a-b);
        break;
        case '*' : printf("%2.lf * %2.lf = %2.lf",a,b,a*b);
        break;
        case '/' :
            if (b !=0)
                printf("%2.lf / %2.lf = %2.lf",a,b,a/b);
            else
                printf("error!!!,the number is divided by 0");
        break;
        default : printf("operator is not correct");

    }



    return 0;
}
