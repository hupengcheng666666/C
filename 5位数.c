#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

/*输入5位以内的数，
输出这个数和位数并倒着打印出来*/


int main()
{
	char num[5];
	int k;
	for (int i = 0; i < 5; i++)
	{
		char c = getchar();
		num[i] = c;
		if (c == '\n')
		{
			k = i;
			break;
		}
		else k = 5;
		
	}
	cout << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << num[i];
			if (i == k)
			{
				break;
			}
		}
		cout <<"有"<< k << "位" << endl;
		for (; k >= 0; k--)
		{
			cout << num[k] << endl;
		}
		return 0;
}