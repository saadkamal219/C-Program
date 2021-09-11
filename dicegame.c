#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

 int main(){
 //Start
    int i;
    int dice1, dice2, dice3;
    int diceTotal;
    int prevTotal;
    int point;
    char answer;
    char yn;
    srand(time(NULL));

    dice1 = (rand()%6) + 1;
    dice2 = (rand()%6) + 1;
    dice3 = (rand()%6) + 1;

    diceTotal = dice1 + dice2 + dice3;
    prevTotal = dice1 + dice2 + dice3;
    printf("I just rolled three die, the sum of all three was: %d\n", diceTotal);
 //Initialization
 printf("Let's play a game. Are you interested? [y/n] \n");
 scanf("%c", &yn);
 if ( yn == 'n' )
 {
     printf("What's wrong with you dude. Won't you get bored sitting like that without donig anything? \n", yn);
 }else
 {  
  printf("Let's goooo \n", yn);
    for(i=0; i<10; i++){
        printf("Will the next roll be higher(h), lower(l) or the same(s) as %d?: ", diceTotal);
        scanf(" %c", &answer);

        dice1 = (rand()%6 + 1);
        dice2 = (rand()%6 + 1);
        dice3 = (rand()%6 + 1);
        diceTotal = dice1 + dice2 + dice3;
        if(answer == 'h'){
            if(diceTotal > prevTotal){
                printf("The new die total was %d, you were correct\n", diceTotal);
            }else{
                printf("The new die total was %d, you were wrong\n", diceTotal);
                }
        }
        if(answer == 's'){
            if(diceTotal == prevTotal){
                printf("The new die total was %d, you were correct\n", diceTotal);
            }else{
                printf("The new die total was %d, you were wrong\n", diceTotal);
                }
        }
        if(answer == 'l'){
            if(diceTotal < prevTotal){
                printf("The new die total was %d, you were correct\n", diceTotal);
            }else{
                printf("The new die total was %d, you were wrong\n", diceTotal);
                }
        }

    prevTotal = dice1 + dice2 + dice3;
    }
 printf("That was fun!!!! Right? \n");
 printf("How many points did you earn?? [Don't lie] \n");
 scanf("%d", &point);
 if ( point >= 7 )
 {
     printf("Damnnnn dude, you are a blaster, %d point is not a joke. Well played \n", point);
 }
 if ( point >= 5 )
 {
     printf("Huhhhhh. You are little bit confused, but %d point is not bad at all \n", point);
 } 
 if ( point >= 3 )
 {
     printf("What's wrong mister?? Don't you get it?");
 }else
 {
     printf("You are a badass. Hahahaa");
 }
 }
    return 0;

}
