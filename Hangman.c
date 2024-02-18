#include <stdio.h>
#include <stdbool.h>
#include <time.h>



main()
{
    char bWord[200];
    char gWord[200];
    bool flag, result;
    int wLength,i;

    printf("\n\t\t-----------------------\n\t\tWelcome to Hangman Game");
    printf("\n\t\t-----------------------\n\n");
    printf("******************************************************\n");
    printf("   Guide:\n2 players are needed for this game.\nPlayer 1 has to come up with the base word.");
    printf("\nAnd player 2 has to guess the word within 3 guesses.\n");
    printf("(The base word hast to be between 3 and 15 letters.)");
    printf("\n\n******************************************************\n");

    printf("\n ::Player 1, enter the base word:: ");

    flag=1;
    do
    {
        scanf("%s", bWord);
        wLength = strlen(bWord);
        if (wLength > 2 && wLength < 16){flag = false;}
        else
        {printf("\nIllegal amount of letters. Try again:");}
    } while (flag);

    printf(" ::Player 2, now you have to guess:: ");
    result = 0;
    for(i=0; i<3; i++)
    {
        scanf("%s", gWord);
        if (strcmp(bWord, gWord) == 0){
            result=1;
            break;
        }
        else {
           if (i==2)break;
           printf("\nWrong!!! Try again:");
        }
    }
    (result)? printf("\n ::Player 2, you won !!!\n\n") : printf("\n ::Player 1, you won!!!\n\n");






    return 0;
}
