// program to sort the given float_array in descending order using bubble sort
#include <stdio.h>

void bubble_sort(float array[], int n);

void display(float array[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%.3f ", array[i]);
}
int main()
{
	int n;
	float array[50];
	printf("Enter length of array : ");
	scanf("%d", &n);

	printf("Enter %d data for array : ", n);

	for (int i = 0; i < n; i++)
		scanf("%f", &array[i]);

	printf("\nBefore Sorting : ");
	display(array, n);

	bubble_sort(array, n);

	printf("\nAfter Sorting : ");
	display(array, n);

	return 0;
}
void bubble_sort(float array[], int n)
{
	float temp;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (array[j] < array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}