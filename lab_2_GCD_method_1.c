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
	int hcf = 1, temp = a;
	if (a > b)
		temp = b;

	for (int i = 1; i <= temp; i++)
		if (a % i == 0 && b % i == 0)
			hcf = i;
	return hcf;
}