#include <stdio.h>
#include <string.h>
typedef struct  
{
char s[100];
int f;
}Node;

Node d[1005];
int n;

int main()
{
int i,x,y,len,k,r,f;
char str[100][100];
char temp[100];
while(scanf("%d",&n)!=EOF)
{
   for(i=1;i<=n;i++)
     {
       scanf("%s",d[i].s);
       d[i].f=0;
     }
   scanf("%s",temp);
   puts(temp);
   len=strlen(temp);
   for(i=0;i<len;i++)
   {
     if(temp[i]=='[')  x=i;
     if(temp[i]==']')  y=i;       
   }
   r=0;
   for(i=x+1;i<y;i++)
   {
     strncpy(str[r],temp,x);
     k=strlen(str[r]);
     str[r][k]=temp[i];
     strcat(str[r],temp+y+1);
     r++;
   }
   for(i=1;i<=n;i++)
   {
     f=0;
     for(i=0;i<r;i++)
       if(strcmpi(d[i].s,str[i])==0) {f=1;break;}
     if(f) d[i].f=1;
   }
   for(i=1;i<=n;i++)
   {
     if(d[i].f==1)
        printf("%d %s\n",i,d[i].s);
   }
}
return 0;
}
