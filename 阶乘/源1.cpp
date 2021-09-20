#include<iostream>
using namespace std;
//递推法
int DiTui(int n)
{
	int x, y = 1, i;
	if (n == 0 || n == 1)
	{
		y = 1;
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			y = i * y;
		}
	}
	return y;
}

int main()
{
	int n;
	long y;
	cout << "请输入一个数字: " << endl;
	cin >> n;
	y = DiTui(n);
	cout << n << "!=" << y << endl;
}
