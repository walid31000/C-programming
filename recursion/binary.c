// Here's a C program that converts a decimal number to binary using recursion:
#include<stdio.h>
void binary(int num);

int main()
{
	int number;
	printf("enter number ");
	scanf("%d",&number);
	printf("the binary of your number =");
	binary(number);
	
	
}
void binary(int num)
{
  
	if(num>0)
	
	binary(num/2);
	printf("%d",(num%2));
	
		 
}