#include <stdio.h>
#include <string.h>

int main()
{
int i,len,k,f;
char s[10000];
while(scanf("%s",s)!=EOF)
{
   len=strlen(s);
   k=len/2;
   f=1;
   for(i=0;i<=k;i++)
   {
      if(s[i]!=s[len-i-1])
      {
        f=0;
        break;
      }
   }
   if(f)
     printf("Yes!\n");
   else
     printf("No!\n");
   memset(s,' ',sizeof(s));
}
return 0;
}