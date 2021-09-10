#include<stdio.h>
#include<stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
//hello world
int main(){

 char a[100];
 char b[100];
 char d[100];
 char more;
 char c[100] = "";
//First part
     puts("What's your name");
         gets(a);
     puts("What's your favourite food");
         gets(b);
 strcat(c,a);
 strcat(c, " love to eat ");
 strcat(c,b);
     puts(c); 
//Second part
     puts("What's your least favourite food");
         gets(d);
 strcat(c, ", but");
 strcat(c, " hate to eat ");
 strcat(c,d);
     puts(c); 
 strcpy(c, "We can punish you by forcing you to eat it !!");   
     puts(c);
//third part     
     printf("Want to tell anything more:- [y/n] \n", more);
         scanf("%c", &more);
 switch (more)
 {
 case 'y':
     printf("Want bring more trouble for yourself!!!...hahaha!!!");
     break;
 case 'n':
     printf("Hahaha!!!...screwed up???");
     break;
 default:printf("Have a relax dude");
     break;
 }      
return 0;
}
