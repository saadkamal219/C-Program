#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

void play(){

  int i, count = 0;
  int dice1, dice2, dice3;
  int dice_total;
  int prev_total;
  int point;
  char yn;
  char answer;
  char again;

  dice1 = ( rand()%6 ) + 1;   
  dice2 = ( rand()%6 ) + 1;
  dice3 = ( rand()%6 ) + 1;

  dice_total = dice1 + dice2 + dice3;
  prev_total = dice1 + dice2 + dice3;

  printf("\n\nYou have rolled three dice and the dice total is %d \n", dice_total); 
  
  for ( i = 0; i < 10; i++)
  {
      printf("\nWill the next roll be higher(h), lower(l) or the same(s) as %d ?: ", dice_total);
        scanf(" %c", &answer);

         dice1 = ( rand()%6 ) + 1;
         dice2 = ( rand()%6 ) + 1;
         dice3 = ( rand()%6 ) + 1;
         dice_total = dice1 + dice2 + dice3;

         if ( answer == 'h' )
         {
             if ( dice_total > prev_total )
             {
                 printf("\nThe new dice total was %d. You are correct \n", dice_total);
                 count++;
             }else
             {
                 printf("\nThe new dice total was %d. You are wrong \n", dice_total);
             }    
         }
         if ( answer == 'l' )
         {
             if ( dice_total < prev_total )
             {
                 printf("\nThe new dice total was %d. You are correct \n", dice_total);
                 count++;
             }else
             {
                 printf("\nThe new dice total was %d. You are wrong \n", dice_total);
             }    
         }
         if ( answer == 's' )
         {
             if ( dice_total == prev_total )
             {
                 printf("\nThe new dice total was %d. You are correct \n", dice_total);
                 count++;
             }else
             {
                 printf("\nThe new dice total was %d. You are wrong \n", dice_total);
             }     
         }
         prev_total = dice1 + dice2 + dice3;        
  }
 printf("\nThat was fun!!!! Right? \n");
 point = count;
 printf("\nYour score is %d.\n",point);
 if ( point >= 7 && point <= 10 )
 {
     printf("\nDamnnnn dude, you are a blaster, %d point is not a joke. Well played \n", point);
 }
 else if ( point >= 5 && point <= 6 )
 {
     printf("\nHuhhhhh. You are little bit confused, but %d point is not bad at all \n", point);
 } 
 else if ( point >= 3 && point <= 4 )
 {
     printf("\nWhat's wrong mister?? Don't you get it? \n");
 }
 else if ( point >= 0 && point <= 2 )
 {
     printf("\nYou are a badass....hahahaha \n");
  }

    printf("\nIf you want to play again then go on or you can exit the game\n\n");

}

void details(){

    printf("\nThe game is all about calculation. Suppose you have rolled three dice so there will three digit in front of you of three dices. Calculate the sum and memorize it. Now another boy/girl will roll those three dices again and you have to predict either the sum total of second time is higer or lower or same as the previous sum total. The process will continue for ten times and at last count your correction score and see what awaits!!!!!\n\n");

}

int main(){

    int choice;

  while (1)
  {
      printf("\n************  DICE GAME ****************\n");
      printf("\n1. Play\n");
      printf("\n2. Details\n");
      printf("\n3. Exit\n");

      printf("\nEnter choice: ");
      scanf("%d",&choice);

      switch (choice)
      {
      case 1:
          play();
          break;
      case 2: details(); break;
      case 3:
          printf("\nWhat's wrong with you dude. Why won't you play???\n\n");
          exit(0);
          break;

      default:printf("Enter valid choice value\n\n");
          break;
      }
  }
   
return 0;
}