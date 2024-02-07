#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int game(char gameMove, char playerMove)
{
  int result;
  if (gameMove == 'r' && playerMove == 'r') result=0;
  if (gameMove == 'r' && playerMove == 'p') result=1;
  if (gameMove == 'r' && playerMove == 's') result=-1;

  if (gameMove == 'p' && playerMove == 'r') result=-1;
  if (gameMove == 'p' && playerMove == 'p') result=0;
  if (gameMove == 'p' && playerMove == 's') result=1;

  if (gameMove == 's' && playerMove == 'r') result=1;
  if (gameMove == 's' && playerMove == 'p') result=-1;
  if (gameMove == 's' && playerMove == 's') result=0;

  return result;
}

int main()
{
  char gameMove, playerMove;
  int randomNum;
  time_t t;
  bool flag = 0;

  srand((unsigned)time(&t));
  randomNum = rand()%100;
  if (randomNum < 33) {gameMove = 'r';}
  if (randomNum >= 33 && randomNum < 66) {gameMove = 'p';}
  if (randomNum >= 66) {gameMove = 's';}

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
