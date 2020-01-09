//有bug 空格
//读入一些整数，逆序输出到一行中
//在读完所有整数之前，没有其他事情可做，只能把每个数都存下来
//存在数组中
#include<stdio.h>
#define maxn 105
int a[maxn];
int main()
 {
 int x,n = 0;
 while(scanf("%d",&x)==1)
    a[n++] = x;
 for(int i = n-1;i >=1;i--)
    printf("%d",a[i]);
    printf("%d\n",a[0]);
    return 0;
 }

//int a[maxn]声明了一个包含maxn个整型变量的数组，即a[0],a[1],a[2],...,a[maxn-1]
//但不包含a[maxn] maxn必须是常数，不能是变量
//声明maxn 为105而不是100 更保险
//在算法竞赛中，常常难以精确地计算出需要的数组大小，数组一般会声明地稍微大一些
//a[n++] = x:先赋值a[n] = x,然后执行n=n+1,可改写为{a[n]=x;n=n+1;}
//此处花括号不能省略，默认情况下，for循环只有一条循环语句，只有使用花括号时，花括号里面
//才会整体作为循环体
//n++和++n都会给n加1，但当他们在一个表达式中时，n++使用加一前的值计算表达式，++n使用加一
//后的值计算表达式
//一般要求输出的行首行尾均无空格，相邻的两个数据间用单个空格隔开，所以一共要输出n个整数，
//但只有n-1个空格，所以只好分两条语句输出
//只有将数组的定义在main函数外时才可以开得很大，放在main函数内，数组稍微大程序就会异常退出
//比较大的数组应该尽量声明在main函数外，否则程序可能无法运行
//C语言数组不能进行赋值操作，若果声明的是int s[maxn],b[maxn],不能赋值b=a
//如果要从数组a复制k个元素到数组b，可以memcpy(b,a,sizeof(int)*k)
//如果数组a和b都是浮点型的，复制时要写成memcpy(b,asizeof(double)*k),且使用memcpy函数要包含
//头文件string.h
//如果把数组a全部复制到数组b中：memcpy(b,a,sizeof(a))

//开灯问题，有n盏灯，编号为1-n，的1个人把所有灯打开，第2个人按下所有编号为而2的倍数的开关
//（这些灯将被关掉），第3个人按下所有编号为3的倍数的开关（其中关掉的灯将被打开，开着的灯被关闭）
//以此类推，一共有k个人，问最后那些灯开着？
//输入n和k，输出开着的灯的编号
//k<=n<=1000
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    const int MAXN = 1010;
    int a[MAXN];
    int n,k,first=1;
    memset(a,0,sizeof(a)); //把数组a清零
    cin>>n>>k;
    for(int i=1;i<=k;i++)
    for(int j=1;j<=n;j++)
    if(j%i==0)
    a[j]=!a[j];
    for(int i=1;i<=n;i++)
    if(a[i])
    {
    if(first)  //设置标志变量first，可表示当前要输出的变量是否为第一个，第一个变量前不应该有
    first=0;   //空格，其他都应该有
    else
    cout<<" ";
    cout<<i;
    }
    return 0;
}


//蛇形填数
//在n*n方阵里填入1,2...,n*n,要求填成蛇形，例如，n=4时方阵为、
//          10  11  12  1
//           9  16  13  2
//           8  15  14  3
//           7   6   5  4
//n<=8 多余的空格只是为了方便观察，不必严格输出
//可以用int a[maxn][maxm]生成一个二维数组，其中maxn与maxm不必相等，该数组共有maxn*maxm个元素
//分别为a[0][0],...........a[maxn-1][maxm-1]
//从1开始填写，设“笔”坐标为(x,y),则一开始x=0,y-n-1（行列的范围是0---n-1），笔的移动轨迹：
//下下下，左左左，上上上，右右，下下，左，上、
//总之，先是下，到不能填为止，然后左，上，右。“不能填”：再走就出界（再走就要走到以前填的格子）
//如果把所有格子初始化为0，就能很方便地加以判断
#include <iostream>
#include <cstring>
using namespace std;
int main()
 {
 const int maxn=20;
 int a[maxn][maxn];
 int n,x,y,tot=0;
 cin>>n;
 memset(a,0,sizeof(a));
 tot=a[x=0][y=n-1]=1;     //赋值x=0和y=n-1后马上把他们作为数组n的下标，因此可以合并完成
 while(tot < n*n)         //判断填写总量是否小于方阵数量
 {                        //没越界，没填过就填写
 while(x+1<n && !a[x+1][y]) a[++x][y] = ++tot;    //a[x+1][y]==0简写
 while(y-1>=0 && !a[x][y-1]) a[x][--y] = ++tot;
 while(x-1>=0 && !a[x-1][y]) a[--x][y] = ++tot;
 while(y+1<n && !a[x][y+1]) a[x][++y] = ++tot;
 }
 for(x=0;x<n;x++)
 {
 for(y=0;y<n;y++)
 cout<<a[x][y];
 cout<<'\n';
 }
 return 0;
 }
//如果越界，x+1会等于n，a[x+1][y]将访问非法内存，但&&时短路运算符，如果x+1<n为假，
//将不会计算!a[x+1][y]




