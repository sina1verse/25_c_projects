#include <stdio.h>
#include <stdbool.h>
#include <time.h>



main()
{
    char baseWord[200];
    bool flag;
    int wLength;

    printf("\n\t\t-----------------------\n\t\tWelcome to Hangman Game");
    printf("\n\t\t-----------------------\n\n");
    printf("*********\n   Guide:\n2 players are needed for this game.\nPlayer 1 has to come up with a word.");
    printf("\nAnd player 2 has to guess the word within 3 guesses.\n*********\n");

    printf("\nPlayer 1, Please Enter a word with less than 15 letters and more than 3 letters.\n base word: ");
    scanf("%s", &baseWord);
    wLength = strlen(baseWord);
    if (wLength>15 || wLength<3)
    {
        flag=1;
        while (flag)
        {
            printf("\nIllegal amount of letters. Try again:");
            scanf("%s", &baseWord);
            if (wLength>2 && wLength<16) flag=0;
        }
    }






    return 0;
}
