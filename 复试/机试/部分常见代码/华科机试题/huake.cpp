#include <stdio.h>
#include <string.h>

char s1[1005],s2[1005];
int s[1005];

int main()
{
int len1,len2;
int i,j;
while(scanf("%s %s",s1,s2)!=EOF)
{
int f,k=0;
len1=strlen(s1);
len2=strlen(s2);
f=0;
for(i=len1-1,j=len2-1;i>=0&&j>=0;i--,j--)
{
    if(((s1[i]-'0')+(s2[j]-'0')+f)>=10)
         {s[k++]=(s1[i]-'0')+(s2[j]-'0')+f-10;f=1;}
    else
         s[k++]=(s1[i]-'0')+(s2[j]-'0')+f,f=0;  
}
while(i>=0)
{
  if((s1[i]-'0'+f)>=10)
     s[k++]=s1[i]-'0'+f-10,f=1;
  else
     s[k++]=s1[i]-'0'+f,f=0;
  i--;
}
while(j>=0)
{
  if((s2[j]-'0'+f)>=10)
    s[k++]=s2[j]-'0'+f-10, f=1;
  else
    s[k++]=s2[j]-'0'+f, f=0;
  j--;
}
if(f>0)
  s[k++]=f;
for(i=k-1;i>0;i--)
  printf("%d",s[i]);
printf("%d\n",s[0]);
}

return 0;
}