#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
 {
 double a;
 while(cin>>a)
 {
 cout<<setprecision(2)<<std::fixed<<fabs(a)<<endl;
 }
 return 0;
 }
//C++求绝对值，整型用abs(),浮点型fabs()
