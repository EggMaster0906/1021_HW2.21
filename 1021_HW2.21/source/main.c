#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		if (i == 1 || i == 9)
		{
			for (int a = 1; a <= 9; a++)
			{
				printf("*");
				if (a == 9)
				{
					printf("\n");
				}
			} 
		}
		else
		{
			printf("*       *\n");
		}
	}
	system("pause");
	return 0;
}