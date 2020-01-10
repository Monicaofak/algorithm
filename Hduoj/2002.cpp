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
 cout<<v<<endl;
 }
 return 0;
 }
