#include <stdio.h>
#include <string.h>

char s1[100],s2[100];
char s[200];

int main()
{
int i,j;
int len1,len2;
while(scanf("%s %s",s1,s2)!=EOF)
{
int k=0;
len1=strlen(s1);
len2=strlen(s2);
for(i=0;i<len1;i++)
    s[k++]=s1[i];
for(j=0;j<len2;j++)
    s[k++]=s2[j];
for(i=0;i<k-1;i++)
  printf("%c",s[i]);
printf("%c\n",s[k-1]);
memset(s1,' ',sizeof(s1));
memset(s2,' ',sizeof(s2));
}
return 0;
}