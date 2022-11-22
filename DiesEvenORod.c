#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main()
{

    int turn = 1, p1, p2, val, sum1=0, sum2=0;
    int game[MAX];
    p1 = -1;  // position of player 1
    p2 = MAX; // position of player 2 at starting
    while (1)
    {
        val = rand()%11 + 2;
        if (turn)
        {
            printf("throw dies player1 it's your turn\n.........");
                turn = 0;
            
            printf("you get %d \n", val);
            if (!(val % 2)){
                printf("!!!! congratulations  !!!!\n\n");
            game[++p1] = val;
            }
            else 
            {
                printf("beter luck next time !\n\n");
            }
        }
        else
        {


            printf("throw dies player2 it's your turn\n\n ........");
            turn=1;
                
           
            printf("you get %d \n", val);
            if (val % 2)
            {
                printf("!!!! congratulations  !!!!\n\n");
                //MAX--;
                game[--p2] = val;
                
            }
                else
                    printf("beter luck next time \n\n!");
            
            
        }
        if (p2 - p1 == 1)
                break;
    }

    for (int i = 0; i < p2; i++)
    {
        sum1 += game[i];
    }
    for (int i = 0; i < p1; i++)
    {
        sum2 += game[i];
    }

    if (sum1 > sum2)
    
        printf("the winner is :--***  player-1  ***");
    else 
        printf("the winner is :--***  player-2  ***");

        return 0;
}
