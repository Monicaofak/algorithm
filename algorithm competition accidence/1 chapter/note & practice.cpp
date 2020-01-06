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


