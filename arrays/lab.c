//This C code is designed to find the length of the longest consecutive sequence
// of numbers in an array. Here's a breakdown of how it works:


#include<stdio.h>

int count_long(int *arr,int size);
void main(){

int arr[]={1,2,4,5,6,7,8,9,10,11,12};	

int result =count_long(arr,11);
printf("the longest consequetive numbers =%d",result);
 
 
 
 
}

int count_long(int *arr,int size)
{
	int counter=1,max=0;
   for(int i=0;i<size-1;i++)
{   
 
     if(arr[i]==arr[i+1]-1)
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