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

