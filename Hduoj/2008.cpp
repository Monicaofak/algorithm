//统计给定的n个数中，负数、零和正数的个数。
//输入数据有多组，每组占一行，每行的第一个数是整数n（n<100），表示需要统计的数值的个数，然后是n个实数；如果n=0，则表示输入结束，该行不做处理。
//对于每组输入数据，输出一行a,b和c，分别表示给定的数据中负数、零和正数的个数。
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a[255];
	int n;
	int b=0, c=0, d=0;
	while (cin >> n) {
		b = 0; c = 0; d = 0;
		if (n == 0) {
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				cin >> a[n];
				if (a[n] < 0) {
				b++;
				}
				else if (a[n] == 0) {
					c++;
				}
				else if (a[n] > 0) {
					d++;
				}
			}
		cout << b << " " << c << " " << d << endl;
		}
	}
    return 0;
}

