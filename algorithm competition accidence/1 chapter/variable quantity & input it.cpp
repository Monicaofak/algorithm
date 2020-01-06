//输入两个整数，实现相加
#include <iostream>
using namespace std;
int main()
 {
 int a,b;
 cin>>a>>b;
 cout<<a+b;
 return 0;
 }


//输入圆柱的底面半径和高，输出表面积，保留三位小数
#include <iostream>
#include <cmath>
using namespace std;
int main()
 {
 double r,h,a;
 const double PI = acos(-1.0);
 cin>>r>>h;
 a=r*r*PI*2+2*r*h*PI;
 cout<<a;
 return 0;
 }
//算法竞赛不在用户输入之前打印提示，不要让程序“按任意键退出”，输出完毕立即终止程序，不要等用户按键。
//一般情况程序不能直接读取键盘和控制屏幕，不要在算法竞赛中使用getch() getche() gotoxy()和clrscr()函数
//注意严格按照输出格式，算法竞赛中，每行输出都应以回车符结束，包括最后一行，除非特别说明，每行行首不应该有空格
//行末通常可以有多余空格，输出的每个数字或字符间应该以单个空格隔开
//尽量用const关键字声明常量
