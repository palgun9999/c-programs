#include <stdio.h>
int main() 
{
    int num = 10564; 
    int sum = 0;
    int original_num = num; // store the original number
	printf("The number is: %d\n", original_num);
	while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
	printf("Sum of the digits: %d\n", sum);
	return 0;
}


