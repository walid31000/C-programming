/* print the number reversed  from one another by three spaces each.*/
 #include <stdio.h>
 
 void main()
 {
	 int num,var;
	 printf("enter the number \n");
	 scanf("%d",&num);
	 printf("the number reversed is \n");
	 while (num!=0)
	 {
		
		 var=num%10;
		  num=num/10;
		 printf("%d",var);
     }
 }
	 