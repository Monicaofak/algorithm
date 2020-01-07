//3n+1
//对于任意大于1的自然数n，若n为奇数，则将n变为3n+1,否则变为n的一半，经过若干次这样的变换
//一定会使n变为1 如3——10——5——16——8——4——2——1
//输入n，输出循环的次数,n<=10^9
//分析：此处循环次数不确定，用while来实现
#include <iostream>
using namespace std;
int main()
 {
 int n2,count=0;
 cin>>n2;
 long long n = n2;
 while(n > 1)
 {
 if (n % 2 == 0)
 {
 n=n/2;
 }else
 {
 n=3*n+1;
 }
 count++;
 }
 cout<<count;
 return 0;
 }
//避开了对long long 的输入输出


//近似计算
//计算PI/4=1-1/3+1/5-7/1.....，直到最后一项小于10^-6
//只有算完一项后才知道它是否小于10^6,也就是说，循环终止判断在计算之后，适用do-while循环
#include <iostream>
using namespace std;
int main()
 {
  double sum = 0;
  for(int i = 0;;i++)
  {
  double term = 1.0/(i*2+1);
  if (i % 2 ==0)
  {
  sum = sum + term;
  }else
  {
  sum=sum-term;
  }
  if(term < 1e-6)
  break;
  }
  cout<<sum;
  return 0;
 }




