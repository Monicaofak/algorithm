//输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
//输入数据有多组，每组占一行，有三个字符组成，之间无空格，对于每组输入数据，输出一行，字符中间用一个空格分开。
#include <iostream>
#include <cstdio>
using namespace std;
int main()
 {
 int i,j;
 char a[3],t;
 while(gets(a))
 {
 for(j = 0;j <3;j++)
    for(i=j+1;i<3;i++)
 if(a[j]>a[i])
 {
 t=a[j];
 a[j]=a[i];
 a[i]=t;
  }
  cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
 }
 
 return 0;
 }
