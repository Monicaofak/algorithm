//输入两点坐标（X1,Y1）,（X2,Y2）,计算并输出两点间的距离。输入数据有多组，每组占一行，由4个实数组成，分别表示x1,y1,x2,y2,数据之间用空格隔开。
//对于每组输入数据，输出一行，结果保留两位小数。
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
 {
 double x1,y1,x2,y2;
 double t;
 while (cin>>x1>>y1>>x2>>y2)
 {
 t= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
 cout<<fixed;
 cout<<setprecision(2);
 cout<<t<<endl;
 }
 return 0;
 }
