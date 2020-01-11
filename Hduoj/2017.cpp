//对于给定的一个字符串，统计其中数字字符出现的次数。
//输入数据有多行，第一行是一个整数n，表示测试实例的个数，后面跟着n行，
//每行包括一个由字母和数字组成的字符串。
//对于每个测试实例，输出该串中数值的个数，每个输出占一行。
//Input
//2
//asdfasdf123123asdfasdf
//asdf111111111asdfasdfasdf

//Output
//6
//9
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	char a[100];
	cin >> n;
	getchar();
	while(n--)
	{
		gets(a);
		int t = 0;
		int s = strlen(a);
		for(int i = 0; i < s; i++)
		{
			if(a[i] >= '0' && a[i] <= '9')
			t++;
		}
		cout << t << endl;
	}
}

