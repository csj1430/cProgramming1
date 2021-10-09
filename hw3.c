#include <stdio.h>
int main()
{
	int num, a, b=0;

	printf("Please enter a number:");
	scanf_s("%d", &num);

	for (a = 2; a <= num; a++)
	{
		if (num % a == 0) b++;
	}
	if (b == 1)
		printf("It is a prime number.");
	else
		printf("It is not a prime number.");

	return 0;
}
