/**
 * @file number guessing game
 * @brief this file contains while loops and decision making statments
 * @author rithvik
 * @date 2024-10-27
 */

#include <stdio.h>

int main()
{
    int secretnumber = 7;
    int guess;
    int guesscount=0;
    int guesslimit=5;
    int outofguesses=0;



    while(guess !=secretnumber && outofguesses==0)
    { if(guesscount<guesslimit)
      {
        printf("enter the number :");
        scanf("%d",&guess);
        guesscount++;
      }
      else
      {
          outofguesses=1;
      }
    }
    if(outofguesses==1)
    {
        printf("out of chances");
    }
    else
    {
        printf("you win");
    }



    return 0;
}


