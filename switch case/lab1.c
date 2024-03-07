#include<stdio.h>
// print number in words in reverse order for ex 153 ->three five one
int main ()
{
   int a,rem;
   printf("please enter a number \n");
   scanf("%d",&a);
   
   
   while(a>0)
 {	   
     
    rem=a%10;
 	
   switch (rem)
   {
	   case 0:printf("Zero");break;
	   case 1:printf("One");break;
	   case 2:printf("Two");break;
      case 3:printf("Three");break; 
	  case 4:printf("Four");break;
	  case 5:printf("Five");break;
	  case 6:printf("Six");break;
	  case 7:printf("Seven");break;
	  case 8:printf("Eight");break;
	  case 9:printf("Nine");break;
   
   }
   	      
   
    a=a/10;
   
 }
 
	
}	