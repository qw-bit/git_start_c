#include <stdio.h>

int main()
{

	int a, n, row, col;


	printf("Enter the number of rows: ");

	scanf("%d", &a);


	n = a - 1;


	for (row = 0; row <= n; row++)
	{
	
		for (col = 0; col <= row; col ++)
				{

					printf("%d ", (row * col));

				}

		printf("\n");		

	}

	return 0;

}