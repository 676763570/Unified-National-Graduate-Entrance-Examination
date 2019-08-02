#include <stdio.h>

void main()
{
	FILE *fp1 = fopen("d:\\abc0.txt","w");
	FILE *fp2;
	char ch;
	int tag,numS,numW,numC;
	/*(1)*/
	if(!fp1)
		return;
	while((ch=getchar())!=EOF)
		fputc(ch,fp1);
	fclose(fp1);
	/*(2)*/
	fp1 = fopen("d:\\abc0.txt","r");
	fp2 = fopen("d:\\abc1.txt","w");
	if(!fp1||!fp2)
		return ;

	tag = 1;
	while((ch=fgetc(fp1))!=EOF)
	{
		if(tag==1||ch!=' ')
			fputc(ch,fp2);
		if(ch==' ')
			tag = 0;
		else
			tag = 1;
	}
	fclose(fp1);
	fclose(fp2);
	/*(3)*/
	numC=0;
	numW=0;
	numS=0;
	fp2 = fopen("d:\\abc1.txt","r");
	tag = 1;/* 表示没有空格和标点符号连在一起*/
	if(!fp2)
		return;
	while((ch=fgetc(fp2))!=EOF)
	{
		numC++;
		if(ch=='.'||ch=='?'||ch=='!')
			numS++;
		if(tag==0&&ch!=' '&&ch!='\n')
			tag = 1;
		if(tag==1&&(ch==' '||ch=='\n'))
		{
			numW++;
			tag = 0;
		}
		if(tag==1&&(ch=='.'||ch=='?'||ch=='!'||ch=='\''||ch=='\"'||ch ==';'||ch==':'))
		{
			numW++;
			tag = 0;
		}
	}
	fclose(fp2);
	printf("\nChar:%d\nWord:%d\nSentence:%d\n",numC,numW,numS);
}
