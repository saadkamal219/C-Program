#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
int main()
{
int i,n,lc=0,uc=0,dc=0,sc=0;
char pass[100];
char user[100];
printf("1. Password must be more than 8 characters \n");
printf("2. Password must contain minimum a digit, an upper case letter, a lower case letter, a special symbol. \n");
printf("3. You can't use any space \n");
LOOP:
printf("\v Enter the password: \n");
gets(pass);  
n=strlen(pass);
if(n>=8){

for(i=0;i<n;i++)  
{
     if(pass[i]==' ')
     {
         printf("\n\tYou can't give any space \n\tTry again ");goto LOOP;
     }
     else
         if(isalpha(pass[i]))
         {
         if(isupper(pass[i]))
         uc++;
         else
        lc++;
         }
     else if(isdigit(pass[i]))
     dc++;
     else if((ispunct(pass[i]))&&(isgraph(pass[i])))
     sc++;
}
}
else
    {printf("\n\tEnter atleast 8 characters!\n");
    goto LOOP;}
if(lc>0 )
   {
    if(uc>0)
    {
        if(sc>0)
         {
            if(dc>0)
         {
          printf("\n\tYour account has been created successfully\n");exit(1);
         }else printf("\n\tDigit is missing in your password\n\tTry again!");goto LOOP;
      }else printf("\n\tSpecial character is missing in your password\n\tTry again!");goto LOOP;
    }else printf("\n\tUppercase is missing in your password\n\tTry again!");goto LOOP;
   }else printf("\n\tLowercase is missing in your password\n\tTry again!");goto LOOP;

}
