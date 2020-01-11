//青年歌手大奖赛中，评委会给参赛选手打分。选手得分规则为去掉一个最高分和一个最低分，
//然后计算平均得分，请编程输出某选手的得分。
//输入数据有多组，每组占一行，每行的第一个数是n(2<n<=100)，
//表示评委的人数，然后是n个评委的打分。
//对于每组输入数据，输出选手的得分，结果保留2位小数，每组输出占一行。
//Input
//3 99 98 97
//4 100 99 98 97
 
//Output
//98.00
//98.50

#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main(void)
{
	int n,a[100],s;
	while(cin>>n)
	{
		s=0;
		for(int i=0;i<n;i++)
		{
		cin>>a[i];
		s+=a[i];
		}
        sort(a,n+a);
	    cout<<fixed<<setprecision(2)<<(double)(s-a[0]-a[n-1])/(n-2)<<endl;
	}
}
