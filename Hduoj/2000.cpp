#include <iostream>
#include <cstdio>
using namespace std;
int main()
 {
 int i,j;
 char a[3],t;
 while(gets(a))
 {
 for(j = 0;j <3;j++)
    for(i=j+1;i<3;i++)
 if(a[j]>a[i])
 {
 t=a[i];
 a[i]=a[j];
 a[j]=t;
  }
  cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
 }
 return 0;
 }
