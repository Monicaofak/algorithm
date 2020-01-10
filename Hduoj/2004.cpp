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
