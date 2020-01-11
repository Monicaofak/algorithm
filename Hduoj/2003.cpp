//求实数的绝对值。输入数据有多组，每组占一行，每行包含一个实数。对于每组输入数据，输出它的绝对值，要求每组数据输出一行，结果保留两位小数

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
 {
 double a;
 while(cin>>a)
 {
 cout<<setprecision(2)<<std::fixed<<fabs(a)<<endl;
 }
  return 0;
 }
//C++求绝对值，整型用abs(),浮点型fabs()
