//有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？
//输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0<n<55)，n的含义如题目中描述。
//n=0表示输入数据的结束，不做处理。
//对于每个测试实例，输出在第n年的时候母牛的数量。
//每个输出占一行。
// Input
//2
//4
//5
//0
 
//Output
//2
//4
//6
#include<iostream>
using namespace std;
int fibonacci1(int n)
{
    switch(n)
    {
        case 1:return 1;
        case 2:return 2;
        case 3:return 3;
        default:return fibonacci1(n-3)+fibonacci1(n-1);
    }
}
int main()
{
    int n;
    while(cin>>n&&n)
    {
        cout<<fibonacci1(n)<<endl;
    }
    return 0;
}
