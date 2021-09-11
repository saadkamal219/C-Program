#include <stdio.h>
#include<stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){

  int i;
  int dice1, dice2, dice3;
  int dice_total;
  int prev_total;
  int point;
  char yn;
  char answer;
  

  dice1 = ( rand()%6 ) + 1;
  dice2 = ( rand()%6 ) + 1;
  dice3 = ( rand()%6 ) + 1;

  dice_total = dice1 + dice2 + dice3;
  prev_total = dice1 + dice2 + dice3;
     
  printf("You have rolled three dice and the dice total is %d \n", dice_total); 

  printf("Let's play a game. Are you interested? [y/n] \n");
  scanf("%c", &yn);

 if ( yn == 'n' )
 {
     printf("What's wrong with you dude. Won't you get bored sitting like that without donig anything? \n", yn);
 }else
 {  
  printf("Let's goooo \n", yn);     
  for ( i = 0; i < 10; i++)
  {
      printf("Will the next roll be higher(h), lower(l) or the same(s) as %d?: ", dice_total);
        scanf(" %c", &answer);

         dice1 = ( rand()%6 ) + 1;
         dice2 = ( rand()%6 ) + 1;
         dice3 = ( rand()%6 ) + 1;
         dice_total = dice1 + dice2 + dice3;

         if ( answer == 'h' )
         {
             if ( dice_total > prev_total )
             {
                 printf("The new dice total was %d. You are correct \n", dice_total);
             }else
             {
                 printf("The new dice total was %d. You are wrong \n", dice_total);
             }    
         }
         if ( answer == 'l' )
         {
             if ( dice_total < prev_total )
             {
                 printf("The new dice total was %d. You are correct \n", dice_total);
             }else
             {
                 printf("The new dice total was %d. You are wrong \n", dice_total);
             }    
         }
         if ( answer == 's' )
         {
             if ( dice_total == prev_total )
             {
                 printf("The new dice total was %d. You are correct \n", dice_total);
             }else
             {
                 printf("The new dice total was %d. You are wrong \n", dice_total);
             }     
         }
         prev_total = dice1 + dice2 + dice3;        
  }
 printf("That was fun!!!! Right? \n");
 printf("How many points did you earn?? [Don't lie] \n");
 scanf("%d", &point);
 if ( point >= 7 && point <= 10 )
 {
     printf("Damnnnn dude, you are a blaster, %d point is not a joke. Well played \n", point);
 }
 else if ( point >= 5 && point <= 6 )
 {
     printf("Huhhhhh. You are little bit confused, but %d point is not bad at all \n", point);
 } 
 else if ( point >= 3 && point <= 4 )
 {
     printf("What's wrong mister?? Don't you get it?");
 }
 else if ( point >= 0 && point <= 2 )
 {
     printf("You are a badass....hahahaha");
  }
 }     
 
return 0;
}