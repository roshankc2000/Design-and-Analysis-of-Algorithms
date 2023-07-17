#include <stdio.h>

void bubble_sort(int array[], int n);

void display(int array[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);
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

	bubble_sort(array, n);

	printf("\nAfter Sorting : ");
	display(array, n);

	return 0;
}
void bubble_sort(int array[], int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}