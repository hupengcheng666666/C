求ax2+bx+c=0的根




#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>



using namespace std;

int main()
{
	float a, b, c;
	cout << "ax2+bx+c=0" << endl;
	cout << "请分别输入a,b,c" << endl;
	cin >> a >> b >> c;
	float d = b*b - 4 * a*c;
	float x1, x2;
	if (d > 0)
	{
		x1 = ((-b) + sqrt(d)) / (2 * a);
		x2 = ((-b) - sqrt(d)) / (2 * a);
		cout << "x1=" << x1 << endl;
		cout << "x2=" << x2 << endl;
	}
	else if (d == 0)
	{
		x1 = x2 = (-b) / 2 * a;
		cout << "x1=x2=" << x1 << endl;
	}
	else cout << "无解" << endl;



	system("pause");
	return 0;
}
