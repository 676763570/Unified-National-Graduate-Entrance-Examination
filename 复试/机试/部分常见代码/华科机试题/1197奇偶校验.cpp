#include <stdio.h>
#include <string.h>

char s[100];

void find(int t)
{
int i,k,d[8];
i=0;
k=0;
memset(d,0,sizeof(d));
while(s[t])
{
d[i++]=s[t]%2;
s[t]=s[t]/2;
}
for(i=0;i<8;i++)
  if(d[i]==1) k++;
if(k%2==0)
   d[7]=1;
 for(i=7;i>0;i--)
  printf("%d",d[i]);
printf("%d\n",d[0]);
return;
}

int main()
{
int i,len;
//char ch;
/*//while(scanf("%c",&ch)!=EOF)
//{
i=0;
//if(ch!='\n') s[i++]=ch;
while(scanf("%c",&ch))
{
if(ch=='\n')  break;
s[i++]=ch;
}
len=i;
for(i=0;i<len;i++)
{
  find(i);
}
//}
return 0;
}*/

while(scanf("%s",s)!=EOF)
{
len=strlen(s);
for(i=0;i<len;i++)
   find(i);
   }
   return 0;
   
}