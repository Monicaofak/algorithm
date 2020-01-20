/*TeX中的引号
在TeX中，左双引号是“``”,右双引号是“''”，输入一篇包含双引号的文章，你的任务是把它转换成TeX的
格式
input：
"To be or not to be,"quoth the Bard,"that is the question".
output:
``To be or not to be ,''quoth the Bard,``that is the question''.
关键：如何判断一个双引号是左双引号还是右双引号
本题特点：可以边读写边处理，而不需要吧输入字符串完整地存下来，因此使用getchar
*/
#include <stdio.h>
int main()
 {
 int c,q=1;
 while((c=getchar()) !=EOF)
 {
 if(c=='"')
 {
 printf("%s",q?"``":"''");q=!q;
 }
 else
 printf("%c",c);
 }
 return 0;
 }

