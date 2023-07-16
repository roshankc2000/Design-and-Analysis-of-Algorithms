#include <stdio.h>

int main()
{
	int x;
	printf("Enter a no to find its fibonacci sum:");
	scanf("%d", &x);
	printf("Fibonacci for %d position is: %d", x, find_fibo(x));
	return 0;
}
int find_fibo(int x)
{
	int sum = 0, a = 1, b = 0;

	for (int i = 0; i < x; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
	}
	return sum;
}
