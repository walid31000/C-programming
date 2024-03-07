//write a C Function that display Prime Numbers between Intervals (two numbers).
#include<stdio.h>
int prime(int x);

int main(void)
{
int num1,num2,i,flag;
printf("please enter first number \n");
scanf("%d",&num1);
printf("please enter second number \n");
scanf("%d",&num2);
for(i=num1;i<=num2;i++)
{
    if(prime(i)==1)
	{
	printf("the number %d is prime\n",i);
    }
}

}
int prime(int x)
{
	int i,flag=1;
	
for(i=2;i<=x/2;i++)
{
	if((x%i)==0)	
	{
		flag=0;
		
	}
	
	
	
}
   if (flag==1)
   {
	   return 1;
   }

}