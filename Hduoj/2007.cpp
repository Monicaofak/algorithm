//给定一段连续的整数，求出他们中所有偶数的平方和以及所有奇数的立方和。
//输入数据包含多组测试实例，每组测试实例包含一行，由两个整数m和n组成。
//对于每组输入数据，输出一行，应包括两个整数x和y，分别表示该段连续的整数中所有偶数的平方和以及所有奇数的立方和。
//你可以认为32位整数足以保存结果。
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    while(cin>>m>>n)  //输入
    {
        int x=0,y=0;             //不要把x,y 定义到while前面，因为每组数据x,y都要初始化为0
        if(m>n){int t=m;m=n;n=t;}  //输入的两个整数不确定大小，可能为 1 3  也可能为 3 1
        for(int i=m;i<=n;i++)      //循环
        {
            if(i%2==0) x+=i*i;
            else y+=i*i*i;
        }
       cout<<x<<" "<<y<<endl;     //输出
    }
    return 0;
}


