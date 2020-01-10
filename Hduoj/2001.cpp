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
