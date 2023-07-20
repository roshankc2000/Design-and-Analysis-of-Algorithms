#include <stdio.h>

void display(int array[], int len)
{
	for (int i = 0; i < len; i++)
		printf("%d ", array[i]);
}

void inserction_sort(int array[], int len)
{
	int i, key, j;
	for (i = 1; i < len; i++)
	{
		key = array[i];
		j = i - 1;

		while (j >= 0 && array[j] > key)
		{
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = key;
	}
}
int main()
{

	int n, array[50];
	printf("Enter length of array : ");
	scanf("%d", &n);

	printf("Enter %d data for array : ", n);

	for (int i = 0; i < n; i++)
		scanf("%d", &array[i]);

	printf("\nBefore Sorting : ");
	display(array, n);

	inserction_sort(array, n);

	printf("\nAfter Sorting : ");
	display(array, n);

	return 0;
}