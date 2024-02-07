#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int game(char gameMove, char playerMove)
{
  if (gameMove == playerMove) return(0);

  if (gameMove == 'r' && playerMove == 'p') return(1);
  else if (gameMove == 'r' && playerMove == 's') return(-1);

  if (gameMove == 'p' && playerMove == 'r') return(-1);
  else if (gameMove == 'p' && playerMove == 's') return(1);

  if (gameMove == 's' && playerMove == 'r') return(1);
  else if (gameMove == 's' && playerMove == 'p') return(-1);
}

int main()
{
  char gameMove, playerMove;
  int randomNum;
  bool flag = 0;

  srand(time(NULL));
  randomNum = rand()%100;

  if (randomNum < 33) {gameMove = 'r';}
  else if (randomNum >= 33 && randomNum < 66) {gameMove = 'p';}
  else r{gameMove = 's';}

  printf("\n\n\n\t\t\tRock::r Paper::p Scissors::s\n\n\n");
  printf("your move:: ");
  playerMove=getch();
  putchar(playerMove);
  if (playerMove != 'r' && playerMove != 'p' && playerMove != 's') (flag=!flag);


  while (flag)
  {
   printf("\n\nWrong Input!!! Try Again.\n");
   printf("your move:: ");
   playerMove=getch();
   putchar(playerMove);
   if (playerMove == 'r' || playerMove == 'p' || playerMove == 's') (flag=!flag);
  }

  switch (game(gameMove, playerMove))
  {
  case -1:
    printf("\n\t\t\t----------------------------------------------------\n\t\t\tComputer played:: %c *** You played %c. You lose. ): \n\t\t\t----------------------------------------------------\n", gameMove, playerMove);
    break;
  case 0:
    printf("\n\t\t\t----------------------------------------------------\n\t\t\tComputer played:: %c *** You played %c. It's a draw! |: \n\t\t\t----------------------------------------------------\n", gameMove, playerMove);
    break;
  case 1:
    printf("\n\t\t\t----------------------------------------------------\n\t\t\tComputer played:: %c *** You played %c. You win! (: \n\t\t\t----------------------------------------------------\n", gameMove, playerMove);
    break;
  }


  return 0;
}
