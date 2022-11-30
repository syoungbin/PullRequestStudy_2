#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int arr[10] = { 0 };
	
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100 + 1;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int j = 0; j < 9; j++)
	{
		for (int k = 0; k < 9; k++)
		{
			if (arr[k] > arr[k + 1])
			{
				int temp = arr[k + 1];
				arr[k + 1] = arr[k];
				arr[k] = temp;
			}
		}
	}
	
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", arr[j]);
	}
	return 0;
}
