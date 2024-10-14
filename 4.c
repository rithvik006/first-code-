/**
 * @file leap year identifier
 * @brief this file contains if-else statements to identify the leap year
 * @author rithvik
 * @date 2024-10-14
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;//find leap year
    printf("enter the year:");

    if(scanf("%d",&year) !=1)//eliminates the input if is not appropriate
    {
       printf("enter the correct year");
       return 1;
    }

    if (year % 400 == 0)
    {
        printf("The year %d is a leap year.\n", year);
    }
    else if (year % 100 == 0)
    {
        printf("the year %d is not leap year\n",year);
    }
    else if (year % 4 == 0)
    {
        printf("the year %d is leap year\n",year);
    }
    else
    {
        printf("The year %d is not a leap year.\n", year);
    }

    return 0;
}
