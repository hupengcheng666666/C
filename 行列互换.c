#include <stdio.h>

int i,j;
int main()
{
	int a[3][3];

	for ( i = 0; i < 3; i++)
	{
		for ( j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}

    for ( i = 0; i < 3; i++)
	{
		for ( j=0;j<3;j++)
		{
			printf("%d\t",a[j][i] );
		}
		printf("\n");
	}


    return 0;

}