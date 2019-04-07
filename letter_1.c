// Print the pattern using the letters

#include <stdio.h>

int main()
{

	int a, n, row, col;

	char l;


	printf("Enter the number of rows: ");

	scanf("%d", &a);


	n = a - 1;


	for(row = 0; row <= n; row++)
	{

		l = 'A';

		for(col = 0; col <= 2*n; col++)
		{

			if((col >= 0 && col <= n - row) || (col >= n+row && col <= 2*n))
			{

				if(col >= 0 && col <= n - row)
				{

					printf("%c", l);

					l++;
				}


				else if (col == n + row)
				{
					
					l = l + 2 * row - 1;

					printf("%c", l);

					l++;

				}

				
				else if(col > n + row && col <= 2*n)
				{

					printf("%c", l);

					l++;
				}
			}


			else
			{

				printf(" ");
			}
		}

		printf("\n");
	}

	return 0;
}