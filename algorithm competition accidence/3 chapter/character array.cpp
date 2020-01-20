//竖式问题
//找出所有形如abc*de（三位数乘以两位数）的算式，使得在完整的竖式中，所有数字都属于一个特定的
//数字集合。输入数字集合（相邻数字之间没有空格），输出所有竖式。每个竖式前应有编号，之后应有
//一个空行。最后输出解的总数。具体格式见样例输出（为了便于观察，竖式中的空格改用小数点显示
//所写的程序中应该输出空格，而非小数点）
//input：
//2357
//output
//<1>
//..775
//X..33
//-----
//.2325
//2325.
//-----
//25575

//The number of solution =1
//就是输入一串数字，然后互枚举出所有的abc（三位数）*de（两位数）相乘的结果，并对他们的结果
//以及运算过程中出现的数与输入的一串数字进行比较，查看是否包含在一串数字中，结果为真，则记
//录一个运算的结果并输出，然后继续验证，模拟了我们在手算乘法时的过程
#include <stdio.h>
#include <string.h>
int main()
 {
 int count=0;
 char s[20],buf[99];
 scanf("%s",s);
 for(int abc=111;abc<=999;abc++)
    for(int de=11;de<=99;de++)
 {
 int x=abc*(de%10),y=abc*(de/10),z=abc*de;
 sprintf(buf,"%d%d%d%d%d",abc,de,x,y,z);
 int ok=1;
 for(int i=0;i<strlen(buf);i++)
    if(strchr(s,buf[i])==NULL) ok=0;
 if(ok)
 {
 printf("<%d>\n",++count);
 printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n",abc,de,x,y,z);
 }
 }
 printf("The number of solutions = %d\n",count);
 return 0;
 }
