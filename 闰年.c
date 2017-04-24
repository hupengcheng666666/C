#include <stdio.h>
#include <stdlib.h>

int main()
{
	int k = 0;
	int j = 0;
	for (int i = 1900; i <= 2000; i++)
	{
		if (i % 4 == 0)
		{
			if (i % 100 == 0)
			{
				if (i % 400 == 0) j = 1;
				else j = 0;
			}
			else j = 1;
		}
		else
			j = 0;

		if (j == 1)
		{
			k++;
			printf("%d\n", i);
		}
	}
	printf("%d\n", k);
   


	system("pause");
	return 0;
}
