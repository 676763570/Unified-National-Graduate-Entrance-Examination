#include <stdio.h>

int main()
{
int i,j,f,n,d[100][100];
while(scanf("%d",&n)!=EOF)
{
   for(i=0;i<n;i++)
     for(j=0;j<n;j++)
        scanf("%d",&d[i][j]);
   f=1;
   for(i=0;i<n;i++)
   {
     for(j=i;j<n;j++)
       if(d[i][j]!=d[j][i])
        {
          f=0;
          break;
        }
     if(f==0)
        break;
   }
   if(f==0)
     printf("No!\n");
   else
     printf("Yes!\n");
}
return 0;
}