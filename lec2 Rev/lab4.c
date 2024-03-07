/*Write a program that asks the user to enter a three-digit number,
 separates the number into its individual digits and prints the digits 
 separated from one another by three spaces each.*/
 #include <stdio.h>
 
 void main()
 {
	 int num,var,pos=0;
	 int counter=0;
	 printf("enter a num \n");
	 scanf("%d",&num);
	 var=num;
	 while(var!=0)
	 {
		 
		 
		 var=var/10;
		 counter++;
		 
	 }
	 printf("the number contain %d digits \n ",counter);
	 printf("the number separated is \n ");
	while(pos<=counter)
	 {
		 
	 num=num/1<<(i-1);
	 printf("%d",num);
	 }
 }
	 