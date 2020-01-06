//the question of chickens and rabbits in one cage
//the amount of chickens and rabbits had been known:n.The total amount of legs:m
//input m,n,output the amount of chickens rabbits in order,else output"No answer"
#include <iostream>
using namespace std;
int main()
 {
 int n,m,a,b;
 cin>>n>>m;
 a=(4*n-m)/2;
 b=n-a;
 if(m%2==1||a<0||b<0)
 cout<<"No answer";
 else
 cout<<a<<" "<<b;
 return 0;
 }
//if语句括号中是一个条件表达式，条件为真，执行后面的语句，条件为假，执行else 后面的语句
//if语句的条件为一个逻辑表达式，值可能为真，也可能为假。单个整数值也可以表示真假，其中0
//为假，其他值为真
//如果a为真，无论b的值如何，a||b均为真，就不必再计算b的值（短路特性）
//C语言中的逻辑运算符都是短路运算符


//输入三个整数，从小到大排序后输出
#include <iostream>
using namespace std;
int main()
{
 int a,b,c,t;
 cin>>a>>b>>c;
 if(a>b)
 {
 t=a;
 a=b;
 b=t;
 }        //执行完毕后，a<=b
 if(a>c)
 {
 t=a;
 a=c;
 c=t;
 }      //执行完毕后，a<=c,且a<=b依然成立
 if(b>c)
 {
 t=b;
 b=c;
 c=t;
 }
 cout<<a<<" "<<b<<" "<<c;
 return 0;
}
//可以用花括号把若干条语句整合成一个整体，这些语句依然按顺序执行
//算法竞赛的目标是编程对任意输入都得到正确结果，而不仅是样例数据
