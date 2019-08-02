#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
int i,len,pre,next;
char ch;
char s[100];
gets(s);
pre=0;
printf("%c",s[0]);
len=strlen(s);
for(i=1;i<len-1;i++)
{
if(s[i]=='-')
{
  next=i+1;

  if((isdigit(s[pre])&&isdigit(s[next]))||(islower(s[pre])&&islower(s[next]))||(isupper(s[pre])&&isupper(s[next])))
  {
    
    for(ch=s[pre]+1;ch<=s[next]-1;ch++)
    {
       printf("%c",ch);
       }
    pre=i+1;
   // i=i+1;
    
  }
  else
  {
  printf("%c",s[i]);
  pre=i+1;
  }
  
}
else
  {
  printf("%c",s[i]);
  pre=i;
  }

}
printf("%c\n",s[len-1]);
return 0;
}
