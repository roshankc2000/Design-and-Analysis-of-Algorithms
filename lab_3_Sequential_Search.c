#include <stdio.h>

void SequentialSearch(int array[], int key, int length);

int main()
{
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int key, length = sizeof(array) / sizeof(array[0]);
	printf("Enter a no to find its presence in given array :");
	scanf("%d", &key);
	SequentialSearch(array, key, length);
	return 0;
}
void SequentialSearch(int array[], int key, int length)
{
	// array size = sizeof(array_name) / sizeof(array_name[0]);
	int flag = 0;
	for (int i = 0; i < length; i++)
		if (array[i] == key)
		{
			flag = 1;
			printf("Match Found!");
			break;
		}

	if (flag == 0)
		printf("Match Not Found!");
}