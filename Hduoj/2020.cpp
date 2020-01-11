//输入n(n<=100)个整数，按照绝对值从大到小排序后输出。
//题目保证对于每一个测试实例，所有的数的绝对值都不相等。
//输入数据有多组，每组占一行，每行的第一个数字为n,接着是n个整数，
//n=0表示输入数据的结束，不做处理。
//对于每个测试实例，输出排序后的结果，两个数之间用一个空格隔开。每个测试实例占一行。
//Input
//3 3 -4 2
//4 0 1 2 -3
//0

//Output
//-4 3 2
//-3 2 1 0
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  int n;
  while(cin>>n&&(n!=0))
  {
  int i,j,a[100],temp;
  for(i=0;i<n;i++)
  {
  cin>>a[i];
  }
  for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
    if(abs(a[j])<abs(a[j+1]))
  {
  temp=a[j];
  a[j]=a[j+1];
  a[j+1]=temp;
  }

  for(i=0;i<n;i++)
  {
  if(i==0)
  cout<<a[0];
  else
  cout<<" "<<a[i];
  }
  cout<<endl;
  }
  return 0;
}
