#include <iostream>
#include <math.h>
using namespace std;

//*********************************************
//求小于1000的正整数的平方根
//******************************************


int main()
{
	int j,i;
	cin >> i;
	if (i > 1000 && i < 0) cout << "重新输入" << endl;
	else
		j = sqrt(i);
	cout << j << endl;


}
