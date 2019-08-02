#include <stdio.h>
#include <string.h>

int n;
unsigned int a,b;
int d[100];

int main()
{
int i,k;
while(scanf("%d",&n)!=EOF&&n)
{
scanf("%d %d",&a,&b);
a=a+b;
k=0;
if(a==0)            //一定要记得判断a的值是否为零
   printf("0\n");
else
{
while(a)
{
d[k++]=a%n;
a=a/n;
}
for(i=k-1;i>0;i--)
   printf("%d",d[i]);
printf("%d\n",d[0]);
}
}
return 0;
}