//out put the value of 1,2,3...n
#include <iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
 cout<<i<<endl;
 }
 return 0;
}
//尽管for循环反复执行相同的语句，但这些语句每次执行的效果往往不同
//建议尽量缩短变量的定义范围，例如，在for循环初始化部分定义循环变量


// 输出所有形如aabb的4位完全平方数（前两位数字相等，后两位数字也相等）
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 for(int a=1;a<=9;a++)
 {
    for(int b=0;b<=9;b++)
    {
    int n=a*1100+b*11;
    int m=floor(sqrt(n)+0.5);  
    if(m*m==n)
    {
    cout<<n;
    }
    }
 }
 return 0;
}
//在经过大量运算后，整数1变成了0.9999999999，floor的结果会是0而不是1.为了减小误差的影响，一般改成四舍五入，即floor(x+0.5).
//(在数轴上把一个单位区间往左移动0.5个单位的距离)  floor(x)等于1的区间为[1,2),而floor(x+0.5)等于1的区间为[0.5,1.5)
//浮点运算可能存在误差。在进行浮点数比较时，应考虑到浮点误差

//枚举平方根，从而避免开方操作
#include <iostream>
using namespace std;
int main()
 {
 for(int x=1;;x++)
 {
 int n=x*x;
 if(n< 1000)continue;
 if(n> 9999)break;
 int hi = n / 100;
 int lo = n % 100;
 if(hi/10 == hi % 10 && lo / 10 == lo % 10)
 cout<<n;
 }
 return 0;
 }

//continue 指跳回for循环的开始，break指直接跳出for循环
//这里的continue语句的作用是排除不足四位的n，直接检查后面的数。当然，也可以直接从x=32开始
//枚举，但是continue可以帮助我们偷懒：不必求出循环的起始点，有了break连循环终点也不必指定
//---当n超过9999后会自动退出循环
//for(;;)是一个经典的死循环
