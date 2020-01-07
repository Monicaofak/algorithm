//有bug 存在乘法溢出的问题  输入100 时，输出-961703（乘法溢出了）
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

//要计算只包含加法、减法和乘法的整数表达式除以正整数n的余数，可以在每步计算之后对n取
//余，结果不变
//上面的程序速度太慢，下面把程序改成每步取模的形式，加一个计时器，查看运行速度
//错
#include <iostream>
#include <time.h>
using namespace std;
clockid_t beginTime,stopTime;

int main()
 {
 beginTime = clock();
 const int MOD = 1000000;
 int n,S=0;
 cin>>n;
 for(int i = 1; i <= n;i++)
 {
 int factorial = 1;
 for(int j = 1;j <= i;j++)
 {
 factorial = (factorial * j % MOD);
 S = (S+factorial) % MOD;
 }
 }
 cout<<S;
 stopTime = clock();
 cout <<"Time used"<< (stopTime - beginTime);
 return 0;
 }

#include <stdio.h>
#include <time.h>
int main()
 {
 const int MOD = 1000000;
 int n,S = 0;
 scanf("%d",&n);
 for (int i = 1;i <= n;i++)
 {
 int factorial = 1;
 for (int j=1;j <= i;j++)
 {
 factorial = (factorial * j % MOD);
 S = (S+factorial) % MOD;
 }
 }
 printf("%d\n",S);
 printf("Time used  = %.2f/n",(double)clock()/CLOCKS_PER_SEC);
 return 0;
 }
//上面的程序再次使用到了常量定义，好处是可以在程序中使用代码MOD而不是常数1000000，改善了
//程序的可读性也方便修改
//这个程序的真正特别之处在于计时函数clock的使用。程序前调用此函数，便可获得整个程序的运行
//时间。这个时间除以常数CLOCKS_PER_SEC得到的值以整数秒为单位


