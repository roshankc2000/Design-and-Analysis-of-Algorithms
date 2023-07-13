#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter 2 numbers:");
	scanf("%d%d", &a, &b);
	printf("G.C.D of %d and %d is %d", a, b, gcd(a, b));
	return 0;
}
int gcd(int a, int b)
{
	int temp;
	while (b % a != 0)
	{
		temp = b % a;
		b = a;
		a = temp;
		// hcf is stored in a
	}
	return a;
	// hcf is returned via gcd fucntion
}