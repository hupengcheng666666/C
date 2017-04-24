#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

/*求俩数的最大公约数和最小公倍数*/


int main()
{
	int m, n;
	cout << "输入两个数" << endl;
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

	cout << "最大公约数:" << n << endl;
	cout << "最小公倍数：" << p / n << endl;

	return 0;


}