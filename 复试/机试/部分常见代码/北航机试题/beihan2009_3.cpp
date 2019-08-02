#include <stdio.h>
#include <string.h>

char c[100],s[100];

int main()
{
int i,len;
FILE *in,*out;
in=fopen( "E:\\C++\\input.txt ",   "r ");          
out=fopen("E:\\C++\\output.txt ","w");
scanf("%s",c);
len=strlen(c);
while(fgets(s,sizeof(s),in)!=NULL)
{
  int k=strlen(s);
  for(i=0;i<k-len+1;i++)
  {
    if(strnicmp(c,s+i,len)==0)
    {
       memset(s+i,' ',len);
       i=i+len;
    }
  }
  for(i=0;i<k;i++)
    if(s[i]!=' ') fprintf(out,"%c",s[i]);
 // fprintf(out,"\n");
}
fclose(in);
fclose(out);
return 0;
}