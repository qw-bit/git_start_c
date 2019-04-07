// 'st' = counts the number of starts to be printed in each rows

#include <stdio.h>

int main()
{

	int a, n, row, st = 0;

	printf("Enter the number of rows : ");
	scanf("%d", &a);

	n = a - 1;

	for(row = 0; row <= n; )
	{

		if(st <= row)
		{

			printf("*");
			st++;
			continue;

		}

		if(st == row + 1)
		{

			printf("\n");
			row++;
			st = 0;

		}
	
	}

	return 0;

}