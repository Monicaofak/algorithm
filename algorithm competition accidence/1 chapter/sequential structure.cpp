//输入一个三位数，分离他的百位，十位，个位，反转后输出
#include <iostream>
using namespace std;
int main()
 {
 int a;
 cin>>a;
 cout<<a%10<<a/10%10<<a/100;
 }
//此题没有说清楚一个细节，即如果个位是0，反转后应该输出吗，例如输入520.输出025还是25
//算法竞赛中遇到这样的问题，可以向监考人员询问
//可用if分支结构判断


//输入两个数a和b，交换二者的值，然后输出
#include <iostream>
using namespace std;
int main()
 {
 int a,b,c;
 cin>>a>>b;
 c=a;
 a=b;            //三变量法
 b=c;
 cout<<a<<' '<<b;
 }
 
 #include <iostream>
using namespace std;
int main()
 {
 int a,b;
 cin>>a>b;
 a=a+b;
 b=a-b;
 a=a-b;
 }
//通过手工模拟程序的方法理解程序的执行方式，重点在于记录每条语句执行之后各个变量的值
//使用范围较窄，只有定义了加减法的数据类型才能使用此方法
//交换两个变量的三变量法使用范围广，推荐使用
//算法竞赛是比较谁能更好的解决问题
