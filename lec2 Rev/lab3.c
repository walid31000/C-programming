#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Count the number of digits
    int temp = number;
    int digitCount = 0;
    while (temp != 0) {
        temp /= 10;
        digitCount++;
    }

    // Extract and print the digits
    printf("Digits separated by three spaces: ");
    int divisor = 1;
    for (int i = 1; i < digitCount; i++)
	{
        divisor = divisor*10;
    }
        while (divisor != 0) 
	   {
        int digit = number / divisor;
        printf("%d   ", digit);
        number %= divisor;
        divisor /= 10;
        }
		

    return 0;
}
