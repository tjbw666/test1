#include<iostream>
using namespace std;
//�ݹ鷨
int DiGui(int n)
{
	long f;
	if (n < 0)
	{
		cout << "������������" << endl;
	}
	else if(n == 0 || n == 1)
	{
		f = 1;
	}
	else
	{
		f = DiGui(n - 1) * n;
	}
	return f;
}



int main()
{
	int n;
	long y;
	cout << "��������һ������: " << endl;
	cin >> n;
	 y = DiGui(n);
	cout << y << endl;
	return 0;
}