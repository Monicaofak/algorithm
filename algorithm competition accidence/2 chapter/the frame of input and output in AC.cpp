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


//输入2 8 3 5 1 7 3 6 而输出错误
//变量在未赋值之前的值是不确定的，特别的，他不一定等于0
//解决：在使用之前赋初值
//由于min保存的是最小值，其初值应该是一个很大的数，max初值应该是一个很小的数
