#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int A[4][4] = { { 2, 3, 4, 1 }, { 8, 6, 5, 7 }, { 11, 12, 10, 9 }, { 15, 14, 16, 13 } };
	int b = 0;
	int a[16];
	/*将二维变一维*/
	for (int i = 0; i < 4;i++)
	for (int j = 0; j < 4; j++)
	{
		a[b] = A[i][j];
		b++;
	}

	/*检验*/
	for (int i = 0; i < 16; i++)
		std::cout << a[i] << "  ";
	
	cout <<"第一次"<< endl;

	b = 0;
	/*由大到小*/
	for (int i = 0; i < 15; i++)
	for (int j = i+1; j < 16; j++)
	{
		if (a[i] < a[j])//Max在前
		{
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}

	for (int i = 0; i < 16; i++)
		std::cout << a[i] << "  ";

	cout << "第2次" << endl;
	/*一维变二维*/
	for (int i = 0; i < 4; i++)
	for (int j = 0; j < 4; j++)
	{
		A[i][j] = a[b];
		b++;
		cout << A[i][j] << "  ";
	}

	cout << "第三次" << endl;
	b = 0;
	/*变第一、三行的顺序*/
	int B[4][4] = { { 2, 3, 4, 1 }, { 0 }, { 11, 12, 10, 9 }, { 0 } };
	for (int i = 0; i < 4; i+=2)
	for (int j = 0; j < 4; j++)
	{
		B[i][j] = A[i][3 - j];
		cout << B[i][j] << " ";
	}
	
	cout << "第4次" << endl;

	/*使B数组位结果的倒排*/
	for (int i = 1; i < 4;i+=2)
	for (int j = 0; j < 4; j++)
	{
		B[i][j] = A[i][j];

	}

	for (int i = 0; i < 4; i++)
	for (int j = 0; j < 4; j++)
	{
		
		cout << B[i][j] << "  ";
	}

	cout << "第5次" << endl;

	/*结果*/
	for (int i = 0; i < 4; i++)
	{

		for (int j = 0; j < 4; j++)
		{
			A[i][j] = B[3 - i][3 - j];
		

			cout << setw(2) << A[i][j] << " ";
		}
		
			cout << endl;
	}
	cout << "第6次" << endl;

	
	return 0;

}