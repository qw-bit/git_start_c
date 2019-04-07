// 'd' variable used for calculate the digit printed in first column of each rows

// 't' variable is used for printing the values in the other columns

// t = t - (n - row + (col + 1)), here (col + 1) is used to get the current col number

// suppose when we are iterating to col == 1 from col == 0 using col++; the value of the col at the time of executing of that block is col == 0

// but we need col value col == 1; so using (col + 1), we can get the col == 1 at the time of execution of the col == 0


#include <stdio.h>

int main()
{

	int a, n, row ,col;

	int d = 1;


	printf("Enter the number of rows : ");

	scanf("%d", &a);


	n = a - 1;


	for(row = 0; row < 1; row++)
	{

		for(col = 0; col <= row; col++)
		{

			printf("%d", d);
		
		}

		printf("\n");
	
	}


	for(row = 1; row <= n; row++)
	{

		d = d + 5 - (row - 1);

		int t = d;

		for (col = 0; col <= n; col++)
		{
			
			if(col >= 0 && col <= row)
			{

				printf("%d ", t);

				t = t - (n - row + (col + 1));

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