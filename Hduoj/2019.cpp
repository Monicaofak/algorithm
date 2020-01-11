//有n(n<=100)个整数，已经按照从小到大顺序排列好，现在另外给一个整数x，
//请将该数插入到序列中，并使新的序列仍然有序。
//输入数据包含多个测试实例，每组数据由两行组成，第一行是n和m，
//第二行是已经有序的n个数的数列。n和m同时为0标示输入数据的结束，本行不做处理。
//对于每个测试实例，输出插入新的元素后的数列。
//Input
//3 3
//1 2 4
//0 0

//Output
//1 2 3 4
#include<iostream>
using namespace std;
int main()
{
	int n,m,i,t,a[100];
	while(cin>>n>>m)
	{
		if(n==0 && m==0) return 0;  //可以简写作!n && !x
	for(i=0;i<n;++i)
		cin>>a[i];
	for(i=0;i<n;++i)
		if(m<a[i])
		{
		for(t=n-1;t>=i;--t)  //从大到小一个一个向前移动
			a[t+1]=a[t];
		    a[i]=m;    //给x腾出空间
			break;
		}
		for(i=0;i<n;++i)
			cout<<a[i]<<" ";
		cout<<a[n]<<endl;
	}
	return 0;
}

