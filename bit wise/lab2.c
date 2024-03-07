
#include<stdio.h>




// program to take a number and a bit number and display the bit

int main()
{
	int x,bit_num;
	printf("please enetr a number \n");
	scanf("%d",&x);
	printf("please enetr a bit  number \n");
	scanf("%d",&bit_num);
	int result=(x>>bit_num)&1;
	printf("the bit_num is %d",result);
}