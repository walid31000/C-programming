
//Write a program that asks the user to enter a three-digit number, separates the number into its individual digits and prints the digits separated
#include<stdio.h>
int main(void)
{
int num,x;
printf("please enter a three digit number \n");
scanf("%d",&num);
while (num!=0)
{
    x=num%10;
	printf("%d\t",x);
	num=num/10;
}
}