#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 1000
int main()
{
FILE *fp;
char fn[255];
char s[size][size];
char min[size],max[size];
int i,n;
printf("please input file name:");
scanf("%s",fn);
if((fp=fopen(fn,"r"))==NULL)
{
   printf("file open error!");
   exit(0);
}
i=n=0;
while((fgets(s[i],size,fp))&&i<size)
{
  i++;
  n++;
}
strcpy(min,s[0]);
strcpy(max,s[0]);
for(i=1;i<n;i++)
{
   if(strlen(s[i])>strlen(max))
      strcpy(max,s[i]);
   if(strlen(s[i])<strlen(min))
      strcpy(min,s[i]);
}
for(i=0;i<n;i++)
  if(strlen(min)==strlen(s[i]))
    printf("%s\n",s[i]);
for(i=0;i<n;i++)
  if(strlen(max)==strlen(s[i]))
    printf("%s",s[i]);
fclose(fp);
return 0;
}
