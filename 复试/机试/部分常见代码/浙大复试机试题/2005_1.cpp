#include <stdio.h>
#include <string.h>

int Find(char s[])
{
char c[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int i;
for(i=0;i<10;i++)
{
 if(!strcmp(s,c[i]))
       return i;
}
return -1;
}


int main()
{
int a,b;
char s1[10];
while(true)
{
a=b=0;
while(scanf("%s",s1)&&strcmp(s1,"+")!=0)
    a=a*10+Find(s1);
while(scanf("%s",s1)&&strcmp(s1,"=")!=0)
    b=b*10+Find(s1);
if(a==0&&b==0)
    break;
else
   printf("%d\n",a+b);
}
return 0;
}