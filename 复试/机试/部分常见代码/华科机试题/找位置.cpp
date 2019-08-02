#include <stdio.h>
#include <string.h>

typedef struct
{
int count;
int flag;
}node;


int main()
{
char a[1000];
int i,j,k,len;
node d[1000];
while(scanf("%s",a)!=EOF)
{
   len=strlen(a);
   for(i=0;i<len;i++)
      d[i].count=d[i].flag=0;
   for(i=0;i<len;i++) 
      for(j=0;j<len;j++)
         if(a[i]==a[j])  d[i].count++;
   for(i=0;i<len;i++)
     if(d[i].count>1)    d[i].flag=1;
   for(i=0;i<len;i++)
   {
     if(d[i].flag==1)
      {
        k=d[i].count;
        for(j=0;j<len;j++)
           {
              if(a[i]==a[j]&&d[j].flag==1&&d[j].count>1)
              {
                 printf("%c:%d",a[j],j);
                 if(k>1) {printf(",");k--;}
                 else
                     printf("\n");
                 d[j].flag=0;
              }
           }
      }
   } 
}
return 0;
}