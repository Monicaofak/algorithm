//根据输入的半径值，计算球的体积。输入数据有多组，每组占一行，每行包括一个实数，表示球的半径。
//输出对应的球的体积，对于每组输入数据，输出一行，计算结果保留三位小数。
//input
//1 
//1.5
//output
//4.189
//14.137
#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.1415927;
using namespace std;
int main()
 {
 double r,v;
 while(cin>>r)
 {
 v=pow(r,3)*(4/3.0)*PI;
 cout<<fixed;
 cout<<setprecision(3);
 cout<<v <<endl;
 }
 return 0;
 }
