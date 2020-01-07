//有bug 存在乘法溢出的问题  输入100 时，输出-961703
//输入n，计算S=1!+2!+3!+....n!的末6位（不含前导0） n<=10^6,n!表示前n个正整数之积
#include <iostream>
using namespace std;
int main()
 {
 int n,S=0;
 cin>>n;
 for(int i = 1; i <= n;i++)
 {
 int factorial = 1;
 for(int j =1; j <= i;j++)
 {
 factorial = factorial * j;
 }
 S=S+factorial;
 }
 cout<<S%1000000;
 return 0;
 }
//累乘器factorial(阶乘)定义在循环里面。换句话说，每执行一次循环体，都要重新声明一次factorial
//并初始化为1（不是0）。因为只有末6位，所以输出时对10^6取模。
//在循环体开始处定义的变量，每次执行循环体时会重新声明并初始化
