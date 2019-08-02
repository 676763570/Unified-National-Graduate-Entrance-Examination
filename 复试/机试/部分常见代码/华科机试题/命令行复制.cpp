#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[])
{
 FILE *source,*dest;
 int i;
 if((source=fopen(argv[1],"a"))==NULL)
 {
  printf("can not open source file");
  exit(1);
 }
 char ch;
 for(i=2;i<argc;i++)
 {
  if((dest=fopen(argv[i],"r"))==NULL)
  {
   printf("can not open dest file %d",i);
   exit(1);
  }
  while((ch=fgetc(dest))!=EOF) 
   fputc(ch,source);
  if( fclose(dest)!=0)
   printf("can not close dest file %d",i);
 }
 if(fclose(source)!=0)
   printf("can not open source file ");
 return 0;
}