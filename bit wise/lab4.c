#include<stdio.h>
// mutiply a number by 9 without using * operation and adding
int main(void)
{
	
	int x;
	printf("please enter a number of three digits\n");
	scanf("%d",&x);
	int result=(x<<3)+x;
	printf("the rsulut of this num by 9 is %d\n",result);
}