#include <stdio.h>
#include <math.h>

double d[200];  //数字
char oper[200]; //运算符
int len1,len2;

int main()
{
double x;
int i,j;
char ch;
oper[0]='#';
while(1)
{
  len1=0;
  len2=1;
  while(scanf("%lf%c",&x,&ch))
  {
    d[len1]=x;
    if(oper[len2-1]=='*')
      {
        d[len1-1]=d[len1-1]*d[len1];
        len1--;
        len2--;
      }
      if(oper[len2-1]=='/')
      {
        d[len1-1]=d[len1-1]/d[len1];
        len1--;
        len2--;
      }
     len1++;   
    if(ch!=' ') break;
    scanf("%c",&ch);
    oper[len2++]=ch;       
  }
  if(fabs(d[0]) < 1e-7&&len1==1)  //判断浮点数是否为0
      break;
  
  for(i=0,j=1;j<len2;j++)
  {
   if(oper[j]=='+')
       d[i+1]=d[i]+d[i+1];
   if(oper[j]=='-')
       d[i+1]=d[i]-d[i+1];
   i++;
  }
  printf("%.2lf\n",d[i]);
}
return 0;
}