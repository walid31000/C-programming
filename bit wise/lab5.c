#include<stdio.h>
// mutiply a number by 9 without using * operation and adding
int main(void)
{
	
	int x;
	printf("please enter a number \n");
	scanf("%d",&x);
	int result=(x<<4)+(x<<1);
	printf("the rsulut of this num by 18 is %d\n",result);
}