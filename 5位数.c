#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

/*����5λ���ڵ�����
����������λ�������Ŵ�ӡ����*/


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
		cout <<"��"<< k << "λ" << endl;
		for (; k >= 0; k--)
		{
			cout << num[k] << endl;
		}
		return 0;
}