#include <iostream>
#include <math.h>
using namespace std;

//*********************************************
//��С��1000����������ƽ����
//******************************************


int main()
{
	int j,i;
	cin >> i;
	if (i > 1000 && i < 0) cout << "��������" << endl;
	else
		j = sqrt(i);
	cout << j << endl;


}
