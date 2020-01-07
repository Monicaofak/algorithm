//input some integer,output the minimum,maximum,average of them
//input ensure these integer are less than 1000
//key:the counts of integer are incertitude
#include <iostream>
using namespace std;
int main()
 {
 int x,n,s=0;
 int max,min;
 cin>>x;
 while(x==1)
 {
 s=s+x;
 if(x<min)
 {
 min=x;
 }
 if(x>max)
 {
 max = x;
 }
 n++;
 }
 cout<<min<<max<<s/n;
 return 0;
 }
