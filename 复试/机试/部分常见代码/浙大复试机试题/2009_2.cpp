#include <stdio.h>
#include <string.h>

int main()
{
char c[102];
int z,o,j,i;
while(scanf("%s",c)!=EOF&&strcmp(c,"E")!=0)
{
z=o=j=0;
int len;
len=strlen(c);
for(i=0;i<len;i++)
   if(c[i]=='Z') z++;
   else if(c[i]=='O') o++;
   else  j++;
while(len--)
{
if(z) {printf("Z");z--;}
if(o) {printf("O");o--;}
if(j) {printf("J");j--;}
}
printf("\n");
}
return 0;
}