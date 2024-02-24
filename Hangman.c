#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

void matchCheck(char mainVar[100], char testVar[100]);
void exePhase(int phase, char bWordCoppy[]);


main()
{
    char bWord[200], bWordCoppy[200];
    char gChar;
    bool flag, result;
    int wLength, omittedNum, temp, phase, i, j;
    int ranPool[200];

    srand(time(NULL));

    printf("\n\t\t-----------------------\n\t\tWelcome to Hangman Game");
    printf("\n\t\t-----------------------\n\n");
    printf("******************************************************\n");
    printf("   Guide:\n2 players are needed for this game.\nPlayer 1 has to come up with the base word.");
    printf("\nAnd player 2 has to guess the word within 3 guesses.\n");
    printf("(The base word hast to be between 3 and 15 letters.)");
    printf("\n\n******************************************************\n");

    printf("\n ::Player 1, enter the base word:: ");
    printf("\n Base word: ");

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

    // randomizing the pool of numbers

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

    phase = 1;
    getchar();
    printf("\n Your guess: ");

    do
       {
            scanf("%c", &gChar);
            result = 0;

            for (i=0; i<omittedNum; i++)
            {
                if(bWord[ranPool[i]] == gChar){
                    bWordCoppy[ranPool[i]]=gChar;
                    result = 1;
                }
            }

            matchCheck(bWord, bWordCoppy);

            if (result == 1)
            {
                printf("\n\n\n ::Nicely done. ::");
            }
            else
            {
                exePhase (phase, bWordCoppy);
                phase ++;
            }
       }
    while(phase < 5);


    /*printf("\n\n\n ::Player 2, now you have to guess 1 character:: ");

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

    //printf("\n\n ::Match(es) found! guess more.\n Your guess: ");

    //result = 0;
    //getchar();
    //scanf("%c", &gChar);

    //for (i=0; i<omittedNum; i++)
    //{
    //    if(bWord[ranPool[i]] == gChar){
    //        bWordCoppy[ranPool[i]]=bWord[ranPool[i]];
    //        result = 1;
    //    }
    //}

    //matchCheck(bWord, bWordCoppy);







        }while(phase < 4;)

    printf("\n ::Nope! you have 2 more guesses");
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

    matchCheck(bWord, bWordCoppy);

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
    matchCheck(bWord, bWordCoppy);

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


    printf("\n ::Your guys is dead. Player 1 wins!!!:: \n\n");*/



    return 0;
}


void exePhase(int phase, char bWordCoppy[])
{
    switch (phase){
    case 1:
        {
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
            break;
        }

    case 2:
        {
            printf("\n ::Nope! you have 2 more guesses");
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
            break;
        }
    case 3:
        {
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
            break;
        }
    case 4:
        {
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
            break;
        }
    }

}

void matchCheck(char mainVar[100], char testVar[100])
{
    if (!strcmp( mainVar, testVar))
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
    printf("\n\n    \4  %s  \4\n\n",mainVar);
    }
}

