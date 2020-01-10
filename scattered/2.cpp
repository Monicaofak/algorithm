#include <iostream>
using namespace std;
int main()
 {
 int num,right;
 cin>>num;
 do {
    right = num % 10;
    cout << right;
    num = num/10;
   }
   while(num !=0);
   return 0;
 }
