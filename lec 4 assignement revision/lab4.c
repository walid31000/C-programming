//factorial using do while
#include<stdio.h>
int main ()
{
	int num,R=1,i=1;
	printf("please enter a number");
	scanf("%d",&num);
	do{
		R=R*i;
		i++;
	}while(i<=num);
		printf("the fact = %d",R);
}	