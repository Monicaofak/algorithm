//错
//1-1input three integers,output of their average value,keep three small number
#include <iostream>
using namespace std;
int main()
 {
  int a,b,c;
  double t;
  t=(a+b+c)/3.0;
  cout<<t;
  return 0;
 }


//1-2 input the Fahrenheit degree:f,output the corresponding centigrade degree:c
//keep three decimal fraction
//tip:c=5(f-32)/9
#include <iostream>
using namespace std;
int main()
 {
 double f,c;
 cin>>f;
 c=5*(f-32)/9;
 cout<<c;
 return 0;
 }


//1-3 (sum)
//input positive integer:n,output the value of 1+2+......n
//tip；the aim is solving the problem,not practice program
#include <iostream>
using namespace std;
int mian()
 {
 int n;
 cin>>n;
 int sum=0;
 for(int i=1;i<=n;i++)
 {
 sum=sum+i;
 }
 cout<<sum;
 return 0;
 }


//1-4
//有bug
//sin and cos
//input positive integer n(n<360),output the value of sin n,cos n
//tip:using the math function
#include <iostream>
#include <cmath>
using namespace std;
int main()
 {
 int n;
 const double PI=acos(-1.0); //cos180=-1,所以arccos-1=PI
 cin>>n;
 cout<<sin(n/180.0*PI)<<' '<<cos(n/180.0*PI);  //sin和cos要用弧度制
 return 0;
 }


//1-5(discount)
//a clothes priced 95 yuan,if consuming add to 300,can have 15% discount,input the amount
//of clothes you bought,output the paid value(unit:yuan) keep two decimal fraction
#include <iostream>
#include <iomanip>
using namespace std;
int main()
 {
 const int PRICE=95;
 int amount;
 double pay;
 cin>>amount;
 if(amount*95 >= 300)
 {
 pay=amount*95*0.85;
 }else
 {
 pay=amount*95;
 }
 cout<<setprecision(2)<<std::fixed<<pay<<"yuan";
 }

//错误
//1-6 triangle
//input the length of three sides of triangle(positive integer),judge if it can be
//right angled triangle ,if can output "yes",if can't,output "no",if can not be a triangle,
//output "not a triangle"
#include <iostream>
using namespace std;
int main()
 {
 int a,b,c;
 cin>>a>>b>>c;
 if((a+b>c||a+c>b||b+c>a)&&(a*a+b*b=c*c||a*a+c*c=b*b||c*c+b*b=a*a))
 {
 cout<<"yes";
 }else
 {
 cout<<"no";
 }
 }
 else
 {
 cout<<"not a triangle";
 }
 return 0;
 }

//1-7
//input the year,judge if the leap year,if is,output "yes",if not output "no"
#include <iostream>
using namespace std;
int main()
 {
 int year;
 cin>>year;
 if(year%400==0 || (year%100!=0 && year%4==0))
    cout<<"yes";
 else
    cout<<"no";
 return 0;
 }




****************************************************************************************************************************************
//the maximum and the minimun of int





