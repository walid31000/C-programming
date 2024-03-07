#include<stdio.h>
int main ()
{
	int i,num,p,result=1;
	printf("enter the number and its power\n");
    scanf("%d%d",&num,&p);
	for(i=1;i<=p;i++)
	{
		result=result*num;
	}
	printf("the number %d power %d = %d",num,p,result);
}