//对于表达式n^2+n+41，当n在（x,y）范围内取整数值时（包括x,y）(-39<=x<y<=50)，
//判定该表达式的值是否都为素数。
//输入数据有多组，每组占一行，由两个整数x，y组成，当x=0,y=0时，表示输入结束，该行不做处理。
//对于每个给定范围内的取值，如果表达式的值都为素数，则输出"OK",
//否则请输出“Sorry”,每组输出占一行。
//Input
//0 1
//0 0
//Output
//OK
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,y,z;
	while(cin>>x>>y &&-39<=x &&x<=50 && -39<=y && y<=50)
	{
		int i,j,n=0;
		if( x==0&&y==0 )
			break;
		else
		{
			for(i=x;i<=y;i++)
			{
				z=i*i+i+41;
				for(j=2;j<z;j++)
					if(z % j == 0)
						n++;
			}
		}
		if(n==0)
			cout<<"OK"<<endl;
		else
			cout<<"Sorry"<<endl;
	}
	return 0;
}
