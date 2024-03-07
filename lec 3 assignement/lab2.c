//program that converts any letter from lowercase to uppercase.
#include<stdio.h>
int main(void)
{
char c;
printf("please enter a character\n");
scanf(" %c",&c);
 if((c<'a')||(c>'z'))
 {
	 printf("invalid input \n");
 }
 else
 {
	 printf("the uppercase of %c is %c \n",c,c-32);
 }
} 