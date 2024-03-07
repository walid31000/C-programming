//checks if it is a prime number or not
#include<stdio.h>
int main(void)
{
int num,i,flag;
printf("please enter a  number \n");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
	if((num%i)==0)	
	{
		flag=0;
		
	}
	else
	{
		flag=1;
		
	}
	
}	

   if (flag==0)
   {
	   printf("the number is not prime \n");
   }
   else
   {
	   printf("the number is prime \n");
   }

}