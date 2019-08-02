#include <stdio.h>
#include <string.h>

int main()
{
FILE *in,*out;
int f,i,j,len1,len2;
char s1[60],s2[60];
in=fopen("input.txt","r");
out=fopen("output.txt","w");
fgets(s1,sizeof(s1),in);
fgets(s2,sizeof(s2),in);
len1=strlen(s1)-2;
len2=strlen(s2)-2;
s1[len1]='\0';
s2[len2]='\0';
f=0;i=j=0;
while(i<len1&&j<len2)
{
  if(s1[i]==s2[j]) { i++; j++; }
  else  { f++; i=f; j=0; }
}
if(j>len2)
   fprintf(out,"%s",s1);
else
{
  for(i=0;i<f;i++)
    fprintf(out,"%c",s1[i]);
  for(i=len2-1;i>=0;i--)
    fprintf(out,"%c",s2[i]);
  for(i=f+len2;i<len1;i++)
    fprintf(out,"%c",s1[i]);
}
fclose(in);
fclose(out);
return 0;
}