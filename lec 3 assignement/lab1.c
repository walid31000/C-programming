
#include<stdio.h>




// program to check the input is alphabet or not

int main()
{
	char c;
	printf("please enter a charachter \n");
	scanf(" %c",&c);
	if((c>='A')&&('Z'>=c)||(c>='a')&&('z'>=c))
	{
		printf(" the input  %c is an alphapet \n",c);
	}
	else
	{
		printf(" the input is not an alphapet \n");
	}
	
	
}	