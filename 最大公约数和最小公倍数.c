#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

/*�����������Լ������С������*/


int main()
{
	int m, n;
	cout << "����������" << endl;
	cin >> m >> n;
	if (n < m)
	{
		int temp = n;
		n = m;
		m = temp;
	}
	int p = m*n;
	while (m != 0)
	{
		int r = n%m;
		n = m;
		m = r;

	}

	cout << "���Լ��:" << n << endl;
	cout << "��С��������" << p / n << endl;

	return 0;


}