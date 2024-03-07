
#include<stdio.h>




// program to clear a bit number and display the result

int main()
{
	int x,bit_num;
	printf("please enetr a number \n");
	scanf("%d",&x);
	printf("please enetr a bit  number \n");
	scanf("%d",&bit_num);
	int result=x&~(1<<bit_num);
	printf("the result after clearing is %d",result);
}