//progrem to check if a number is power of 2 using bitwise
#include<stdio.h>
int main(void)
{
int num,x;
printf("please enter a  number \n");
scanf("%d",&num);
  if((num&(num-1))==0)
   {
	printf("the number is power of 2 \n");
    }
     else
	{
	printf("the number is not a power of 2 \n");
    }
	
}	