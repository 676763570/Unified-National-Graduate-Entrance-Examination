#include <stdio.h>
#include <string.h>

typedef struct  
{
char name[25];
char func[85];
}Node;

Node d[100001];
int n;

int main()
{
int i,k,len;
char s[105];
k=0;
while(gets(s)&&strcmp(s,"@END@")!=0)
{
len=strlen(s);
 for(i=0;i<len;i++)
    if(s[i]==']')
    {
     strncpy(d[k].name,s,i+1);
     strcpy(d[k].func,s+i+2);
     break;
    }
 k++;  
}
scanf("%d",&n);
getchar();
while(n--)
{
gets(s);
if(s[0]=='[')
{
  for(i=0;i<k;i++)
     if(strcmp(d[i].name,s)==0)  {printf("%s\n",d[i].func);break;}
  if(i==k)  printf("what?\n");
}
else
{
  for(i=0;i<k;i++)
     if(strcmp(d[i].func,s)==0)
       {
         len=strlen(d[i].name);
         d[i].name[len-1]=0;
         printf("%s\n",d[i].name+1);
         break;
       }
  if(k==i) printf("what?\n");
}
}
return 0;
}