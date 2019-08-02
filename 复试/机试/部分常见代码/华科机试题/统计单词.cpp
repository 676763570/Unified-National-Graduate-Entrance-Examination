#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
char s[10000];
int i,c;
while(gets(s)!=NULL)
{
c=0;
for(i=0;s[i]!='.';i++)
{
   if(isalpha(s[i])!=0)
      c++;
   if(s[i]==' ')
   {
     if(c!=0)
        printf("%d ",c);
     c=0;
   }          
}
if(c!=0)
   printf("%d\n",c);
memset(s,' ',sizeof(s));
}
return 0;
}