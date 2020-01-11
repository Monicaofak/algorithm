//给定一个日期，输出这个日期是该年的第几天。
//输入数据有多组，每组占一行，数据格式为YYYY/MM/DD组成，
//具体参见sample input ,另外，可以向你确保所有的输入数据是合法的。
//对于每组输入数据，输出一行，表示该日期是该年的第几天。
//Input
//1985/1/20
//2006/3/12

//Output
//20
//71
#include<iostream>
using namespace std;
int main()
{
    int y,m,d,i,sum;
    char w,b;
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};  //数组存放各月天数
    while(cin>>y>>w>>m>>b>>d)
    {
        sum=0;
        a[1]=28;
    if(((y%4==0)&&(y%100!=0) )|| (y%400==0))  //四年一闰，百年不闰，四百年再闰
        {                                     //平年2月28天，闰年2月29天
            a[1]+=1;
            for(i=0;i<=(m-2);i++)
                sum+=a[i];
        }
    else
        {
        for(i=0;i<=(m-2);i++)
                sum+=a[i];
        }
        sum+=d;
        cout<<sum<<endl;
    }
    return 0;
}
