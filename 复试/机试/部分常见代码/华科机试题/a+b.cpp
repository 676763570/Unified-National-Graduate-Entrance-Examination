#include <stdio.h>
#include <string.h>

char a[1005],b[1005];
int d[1005];

int main()
{
 int i,j,len1,len2;
 int f;
 while(scanf("%s %s",a,b)!=EOF)
 {
 int k=0;
 f=0;
 len1=strlen(a);
 len2=strlen(b);
 for(i=len1-1,j=len2-1;i>=0&&j>=0;i--,j--)
 {
   if(((a[i]-'0')+(b[j]-'0')+f)>=10)
      d[k++]=(a[i]-'0')+(b[j]-'0')+f-10,f=1;
   else
      d[k++]=(a[i]-'0')+(b[j]-'0')+f,f=0;
 }
 while(i>=0)
 {
    if((a[i]-'0'+f)>=10)
      d[k++]=a[i]-'0'+f-10,f=1;
    else
      d[k++]=a[i]-'0'+f,f=0;
    i--;
 }
while(j>=0)
 {
    if((b[j]-'0'+f)>=10)
      d[k++]=b[j]-'0'+f-10,f=1;
    else
      d[k++]=b[j]-'0'+f,f=0;
    j--;
 }
 if(f>0)
   d[k++]=f;
 memset(a,'0',sizeof(a));
 memset(b,'0',sizeof(b));
 for(i=k-1;i>0;i--)
  printf("%d",d[i]);
printf("%d\n",d[0]);
 }
 return 0;
}

