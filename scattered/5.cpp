/*对于给定的正整数N，需要你计算 S=1!+2!+3!+...+N!。
输入格式：
输入在一行中给出一个不超过10的正整数N。
输出格式：
在一行中输出S的值。
输入样例：
3

     
输出样例：
9
*/
#include<iostream>
using namespace std;
 int fact(int n)
{
    int facts;
    if(n==1)
        facts=1;
    else
    facts=n*fact(n-1);
    return facts;
}

    int sum(int n)
{
    int sums;
    if(n==1)
    sums=1;
    else
    sums=fact(n)+sum(n-1);
    return sums;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}

