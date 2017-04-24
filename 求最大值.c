#include <iostream>
#include <math.h>
using namespace std;

int getMax(int a,int b)
{
    return (a > b ? a : b);
}



int main()
{
	int i, j, k;
	cin >> i >> j >> k;
	cout<<getMax(i, getMax(j, k))<<endl;
	return 0;
}