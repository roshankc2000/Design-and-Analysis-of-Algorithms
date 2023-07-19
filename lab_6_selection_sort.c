#include <stdio.h>

void display(int array[], int len)
{
	for (int i = 0; i < len; i++)
		printf("%d ", array[i]);
}

void selection_sort(int array[], int len)
{
	int i, j, swap, min_pos;
	for (i = 0; i <= len - 1; i++)
	{
		min_pos = i;
		for (j = i + 1; j < len; j++)
		{
			// here j=i+1 kina bhane we dont need check i with itself in 1st j's iteration
			if (array[j] < array[min_pos])
				min_pos = j;
		}

		// swap function
		if (i != min_pos)
		{
			swap = array[i];
			array[i] = array[min_pos];
			array[min_pos] = swap;
		}
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

	selection_sort(array, n);

	printf("\nAfter Sorting : ");
	display(array, n);

	return 0;
}