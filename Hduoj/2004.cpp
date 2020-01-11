//输入一个百分制的成绩t，将其转换成对应的等级，具体转换规则如下：
//90~100为A;
//80~89为B;
//70~79为C;
//60~69为D;
//0~59为E;
//输入数据有多组，每组占一行，由一个整数组成。
//对于每组输入数据，输出一行。如果输入数据不在0~100范围内，请输出一行：“Score is error!”。
#include <iostream>
using namespace std;
int main()
 {
 double t;
 while(cin>>t)
 {
 if(0 <= t&&t <=59)
    cout<<"E"<<endl;
 if(60 <=t&&t <=69)
    cout<<"D"<<endl;
 if(70 <=t&&t <=79)
    cout<<"C"<<endl;
 if(80 <=t&&t <=89)
    cout<<"B"<<endl;
 if(90 <=t&&t <=100)
    cout<<"A"<<endl;
 if(t<0||t> 100)
    cout<<"Score is error!"<<endl;
 }
 return 0;
 }
