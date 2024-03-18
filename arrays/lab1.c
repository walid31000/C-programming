//function aims to find the length of the longest consecutive sequence of identical numbers in the array


#include<stdio.h>

int count_long(int *arr,int size);
void main(){

int arr[]={1,2,2,2,2,4,5,5,7,8,5};	

int result =count_long(arr,11);
printf("the longest consequetive identical numbers =%d",result);
 
 
 
 
}

int count_long(int *arr,int size)
{
	int counter=1,max=0;
   for(int i=0;i<size-1;i++)
{   
 
     if(arr[i]==arr[i+1])
	 {
		 counter++;
		 if(counter>max)
		 {
			 max=counter;
		 }
		 
		 
	 }
	 else
	 {
		 counter=1;
	 }
	 
}	 
	 return max;
}