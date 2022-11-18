#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define max 5
int main()
{   
    short level = 0;
    int levelMaxNumber = max;
    bool next = true;
    
    do
    {   
        level++;
        levelMaxNumber = level * max;
        time_t t;
        srand((unsigned)time(&t));
        int RN=rand()%levelMaxNumber;
        int G,i=(int)levelMaxNumber/2;
        printf("Your level in the guessing game is:\t%d\t\tI have chosen a number between 0 and %d which you may guess\n",level,levelMaxNumber);
        for (;i>0;i--)
        {
            printf("You have %i tr%s left\nEnter a guess:\t",i,i==1?"y":"ies");
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
        printf("----------------------------------------------------\n");
        if(i==0){
            printf("You have exceeded the number of tries\nMy number was\t%i\n",RN);  
            printf("If you would like to play same level again, write 1 and hit enter.\nBut to exit write 0\n");
            level--;
        }
        else{
            printf("If you would like to go to next level, write 1 and hit enter.\nBut to exit write 0\n");
        }
        scanf("%d",&next);
        printf("----------------------------------------------------\n----------------------------------------------------\n\n");
    } while (next);
    
    return 0;
}
