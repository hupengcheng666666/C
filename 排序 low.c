#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int A[4][4] = { { 2, 3, 4, 1 }, { 8, 6, 5, 7 }, { 11, 12, 10, 9 }, { 15, 14, 16, 13 } };
	int b = 0;
	int a[16];
	/*����ά��һά*/
	for (int i = 0; i < 4;i++)
	for (int j = 0; j < 4; j++)
	{
		a[b] = A[i][j];
		b++;
	}

	/*����*/
	for (int i = 0; i < 16; i++)
		std::cout << a[i] << "  ";
	
	cout <<"��һ��"<< endl;

	b = 0;
	/*�ɴ�С*/
	for (int i = 0; i < 15; i++)
	for (int j = i+1; j < 16; j++)
	{
		if (a[i] < a[j])//Max��ǰ
		{
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}

	for (int i = 0; i < 16; i++)
		std::cout << a[i] << "  ";

	cout << "��2��" << endl;
	/*һά���ά*/
	for (int i = 0; i < 4; i++)
	for (int j = 0; j < 4; j++)
	{
		A[i][j] = a[b];
		b++;
		cout << A[i][j] << "  ";
	}

	cout << "������" << endl;
	b = 0;
	/*���һ�����е�˳��*/
	int B[4][4] = { { 2, 3, 4, 1 }, { 0 }, { 11, 12, 10, 9 }, { 0 } };
	for (int i = 0; i < 4; i+=2)
	for (int j = 0; j < 4; j++)
	{
		B[i][j] = A[i][3 - j];
		cout << B[i][j] << " ";
	}
	
	cout << "��4��" << endl;

	/*ʹB����λ����ĵ���*/
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

	cout << "��5��" << endl;

	/*���*/
	for (int i = 0; i < 4; i++)
	{

		for (int j = 0; j < 4; j++)
		{
			A[i][j] = B[3 - i][3 - j];
		

			cout << setw(2) << A[i][j] << " ";
		}
		
			cout << endl;
	}
	cout << "��6��" << endl;

	
	return 0;

}