#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>



main()
{
    char bWord[200], bWordCoppy[200];
    char gChar;
    bool flag, result;
    int wLength, ranNum, omittedNum, temp, n, i, j;
    int hintList[200]={0}, ranPool[200];
    int poop;
    srand(time(NULL));

    printf("\n\t\t-----------------------\n\t\tWelcome to Hangman Game");
    printf("\n\t\t-----------------------\n\n");
    printf("******************************************************\n");
    printf("   Guide:\n2 players are needed for this game.\nPlayer 1 has to come up with the base word.");
    printf("\nAnd player 2 has to guess the word within 3 guesses.\n");
    printf("(The base word hast to be between 3 and 15 letters.)");
    printf("\n\n******************************************************\n");

    printf("\n ::Player 1, enter the base word:: ");
    printf("\n Your guess: ");

    // Getting base word and checking the number of words
    flag=1;
    do
    {
        scanf("%s", bWord);
        wLength = strlen(bWord);
        if (wLength > 2 && wLength < 16){flag = false;}
        else
        {printf("\nIllegal amount of letters. Try again:");}
    } while (flag);


    // making a pool of numbers

    for (i=0; i<wLength; i++)
    {
        ranPool[i]= i;
    }

    //randomizing the pool of numbers

    for (i=0; i<wLength; i++)
    {
        j=rand() % wLength ;
        temp = ranPool[i];
        ranPool[i] = ranPool[j];
        ranPool[j] = temp;
    }


    strcpy(bWordCoppy, bWord);
    omittedNum = wLength*6/10;


    for (i=0; i<omittedNum; i++)
    {
        bWordCoppy[ranPool[i]] = '-';
    }

    //showing the default word and prompting guesses

    printf("\n\n\n ::Player 2, now you have to guess 1 character:: ");

    printf("\n\n\n");
    printf("\n:     __-------        :");
    printf("\n:    /..\\     |        :");
    printf("\n:    | -|     |        :");
    printf("\n:     \\/      |        :");
    printf("\n:             |        :");
    printf("\n:             |        :");
    printf("\n:             |        :");
    printf("\n:             |        :");
    printf("\n:            / \\       :");
    printf("\n:           /   \\      :");
    printf("\n:          /     \\     :");
    printf("\n\n    \4  %s  \4\n\n",bWordCoppy);
    printf("\n Your guess:");



    result = 0;
    getchar();
    scanf("%c", &gChar);

    for (i=0; i<omittedNum; i++)
    {
        if(bWord[ranPool[i]] == gChar){
            bWordCoppy[ranPool[i]]=bWord[ranPool[i]];
            result = 1;
        }
    }
    if (!strcmp(bWordCoppy, bWord))
    {
        printf("\n ::Player 2, you won !!!");
        printf("\n\n\n");
    printf("\n:     __               :");
    printf("\n:    /^^\\              :");
    printf("\n:    | 0|              :");
    printf("\n:     \\/               :");
    printf("\n:     |                :");
    printf("\n:    /|\\               :");
    printf("\n:   / | \\              :");
    printf("\n:     |                :");
    printf("\n:     /\\               :");
    printf("\n:    /  \\              :");
    printf("\n:   ----------------   :");
    printf("\n\n    \4  %s  \4\n\n",bWordCoppy);
        exit(1);
    }

    printf("\n\n\n");
    printf("\n:     __-------        :");
    printf("\n:    /..\\     |        :");
    printf("\n:    | -|     |        :");
    printf("\n:     \\/      |        :");
    printf("\n:     |       |        :");
    printf("\n:    /|\\      |        :");
    printf("\n:   /   \\     |        :");
    printf("\n:             |        :");
    printf("\n:            / \\       :");
    printf("\n:           /   \\      :");
    printf("\n:          /     \\     :");
    printf("\n\n    \4  %s  \4\n\n",bWordCoppy);
    printf("\n Your guess: ");

    getchar();
    scanf("%c", &gChar);
    for (i=0; i<omittedNum; i++)
    {
        if(bWord[ranPool[i]] == gChar){
            bWordCoppy[ranPool[i]]=bWord[ranPool[i]];
            result = 1;
        }
    }
    if (!strcmp(bWordCoppy, bWord))
    {
        printf("\n ::Player 2, you won !!!");
        printf("\n\n\n");
    printf("\n:     __               :");
    printf("\n:    /^^\\              :");
    printf("\n:    | 0|              :");
    printf("\n:     \\/               :");
    printf("\n:     |                :");
    printf("\n:    /|\\               :");
    printf("\n:   / | \\              :");
    printf("\n:     |                :");
    printf("\n:     /\\               :");
    printf("\n:    /  \\              :");
    printf("\n:   ----------------   :");
    printf("\n\n    \4  %s  \4\n\n",bWordCoppy);
        exit(1);
    }

    printf("\n\n\n");
    printf("\n:     __-------        :");
    printf("\n:    /..\\     |        :");
    printf("\n:    | -|     |        :");
    printf("\n:     \\/      |        :");
    printf("\n:     |       |        :");
    printf("\n:    /|\\      |        :");
    printf("\n:   / | \\     |        :");
    printf("\n:     |       |        :");
    printf("\n:     /\\     / \\       :");
    printf("\n:    /  \\   /   \\      :");
    printf("\n:          /     \\     :");
    printf("\n\n    \4  %s  \4\n\n",bWordCoppy);
    printf("\n Your guess: ");

    getchar();
    scanf("%c", &gChar);
    for (i=0; i<omittedNum; i++)
    {
        if(bWord[ranPool[i]] == gChar){
            bWordCoppy[ranPool[i]]=bWord[ranPool[i]];
            result = 1;
        }
    }
    if (!strcmp(bWordCoppy, bWord))
    {
        printf("\n ::Player 2, you won !!!");
        printf("\n\n\n");
    printf("\n:     __               :");
    printf("\n:    /^^\\              :");
    printf("\n:    | 0|              :");
    printf("\n:     \\/               :");
    printf("\n:     |                :");
    printf("\n:    /|\\               :");
    printf("\n:   / | \\              :");
    printf("\n:     |                :");
    printf("\n:     /\\               :");
    printf("\n:    /  \\              :");
    printf("\n:   ----------------   :");
    printf("\n\n    \4  %s  \4\n\n",bWordCoppy);
        exit(1);
    }

    printf("\n\n\n");
    printf("\n:     __-------        :");
    printf("\n:    /xx\\     |        :");
    printf("\n:    |  |     |        :");
    printf("\n:     \\/      |        :");
    printf("\n:     |       |        :");
    printf("\n:    /|\\      |        :");
    printf("\n:   / | \\     |        :");
    printf("\n:     |       |        :");
    printf("\n:     /\\     / \\       :");
    printf("\n:    /  \\   /   \\      :");
    printf("\n:          /     \\     :");
    printf("\n\n    \4  %s  \4\n\n",bWordCoppy);


    printf("\n ::Your guys is dead. Player 1 wins!!!:: \n\n");



    return 0;
}
