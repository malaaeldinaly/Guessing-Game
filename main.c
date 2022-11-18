#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 10
int main()
{   
    int level = 1;
    int levelMaxNumber = 1*max;
    time_t t;
    srand((unsigned)time(&t));
    int RN=rand()%levelMaxNumber;
    int G,i;
    printf("Your level in the guessing game is:\t%d\nI have chosen a number between 0 and %d which you may guess\n",level,levelMaxNumber);
    for (i=levelMaxNumber/4;i>0;i--)
    {
        printf("You have %i tr%s left\nEnter a guess:",i,i==1?"y":"ies");
        scanf("%i",&G);
        if (G==RN)
        {
            printf("Congratulations!!\nYou guessed it right!\n");
            break;
        }
        else if (G>20||G<0)
            printf("Sorry, Your Number isn't between 0 and 20\nPlease enter a number between 0 and 20");
        else if(G>RN)
            printf("Sorry, %i is wrong.\nMy number is less than that\n",G);
        else if(G<RN)
            printf("Sorry, %i is wrong.\nMy number is greater than that\n",G);
        }
    i==0?printf("You have exceeded the number of tries\nMy number is %i",RN):printf("");
    printf("Press ENTER key to Continue\n");
    getchar();
    return 0;
}
