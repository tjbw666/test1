#include<iostream>
using namespace std;
//递归法
int DiGui(int n)
{
	long f;
	if (n < 0)
	{
		cout << "您的输入有误！" << endl;
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
	cout << "请你输入一个数字: " << endl;
	cin >> n;
	 y = DiGui(n);
	cout << y << endl;
	return 0;
}