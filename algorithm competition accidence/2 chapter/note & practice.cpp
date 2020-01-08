//输出100~999中的所有水仙花数，若3位数ABC满足ABC=A^3+B^3+C^3<,则称其为水仙花数
//如153=1^3+5^3+3^3
#include <iostream>
using namespace std;
int main()
 {
 int a = 0;
 for(int x = 1; x<10;x++)
 {
 for(int y = 0; y<10;y++)
 {
 for(int z = 0; z<10;z++)
 {
 a= 100*x+10*y+z;
 if(a==x*x*x+y*y*y+z*z*z)
 {
 cout<<a<<' ';
 }
 }
 }
 }
 return 0;
 }
 
 #include <iostream>
using namespace std;
int main()
 {
 int x=0;
 int y=0;
 int z=0;
 for(int n=100;n<1000;n++)
 {
 x=n/100;
 y=(n%100)/10;
 z=n%10;

 if(n==x*x*x+y*y*y+z*z*z)
 {
 cout<<n<<' ';
 }
 }
 return 0;
 }



#include <iostream>
using namespace std;
void daffodil_1()
 {
 int a=0;
 for (int x=1;x<10;x++)
 {
 for(int y=0;y<10;y++)
 {
 for(int z=0;z<10;z++)
 {
 a = 100*x+10*y+z;
 if(a==x*x*x+y*y*y+z*z*z)
 {
 cout<<a<<' '<<"is daffodil"<<endl;
 }
 }
 }
 }
 }

void daffodil_2()
 {
 int x=0;
 int y=0;
 int z=0;
 for (int n=100;n <= 1000;n++)
 {
 x = n/100;
 y = (n % 100)/10;
 z = n % 10;

 if(n ==x*x*x+y*y*y+z*z*z)
 {
 cout<<n<<' '<<"is daffodil"<<endl;
 }
 }
 }

 int main()
 {
 cout<<"daffodil_1()"<<endl;
 daffodil_1();
 cout<<endl;
 cout<<"daffodil_2()"<<endl;
 daffodil_2();
 return 0;
 }

*****************************************************************************************************************************************
//hanxin
//相传韩信才智过人，从不直接清点自己军队的人数，只要让士兵先后以三人一排，五人一排，七人一排
//的变换队形，而他每次只掠一眼队伍的排尾就知道总人数了。输入包含多组数据，每组数据包含三个整
//数a,b,c,表示每种队形排尾的人数(a<3,b<5,c<7),输出总人数的最小值（或报告无解），已知总人数不
//小于10人，不超过100人，输入到文件结束为止




