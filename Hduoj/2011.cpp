//多项式的描述如下：
//1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + ...
//现在请你求出该多项式的前n项的和。
//输入数据由2行组成，首先是一个正整数m（m<100），表示测试实例的个数，
//第二行包含m个正整数，对于每一个整数(不妨设为n,n<1000），求该多项式的前n项的和。
//对于每个测试实例n，要求输出多项式前n项的和。每个测试实例的输出占一行，结果保留2位小数。
//Input
//2
//1 2

//Output
//1.00
//0.50
#include<iostream>
#include<iomanip>
using namespace std;
template<class T>
auto sum(int n, T s) ->decltype(s)
{
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			s -= 1.0 / i;
		else
			s += 1.0 / i;
	}
	return s;
}
int main()
{
	int m, n;
	double s(0.0);

	while (cin >> m) {
		while (m--) {
			cin >> n;
			cout << setprecision(2) << fixed << sum(n, s) << endl;
		}
	}
	return 0;
}

