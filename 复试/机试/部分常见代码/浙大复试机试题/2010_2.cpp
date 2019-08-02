#include <stdio.h>
#include <string.h>

int main()
{
int len,i,o1,o2,o3,a,b;
char s[1001];
while(scanf("%s",s)!=EOF)
{
len=strlen(s);
o1=o2=o3=a=b=0;
for(i=0;i<len;i++)
  {
    if(s[i]=='z') a=i;
    if(s[i]=='j') b=i;
  }
o1=a;
o2=b-o1-1;
o3=len-b-1;
if(o1*o2==o3&&o2>0)
   printf("Accepted\n");
else
  printf("Wrong Answer\n");
}
return 0;
}