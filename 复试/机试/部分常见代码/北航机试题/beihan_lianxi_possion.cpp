#include <stdio.h>
#include <math.h>

int main()
{
	int i,m,k,e=0;
	double temp,result;
 scanf("%d %d",&m,&k);
	temp=log(m)*k-m;
	for(i=1;i<=k;i++) temp-=log(i);
	result=exp(temp);
	if(result>=10) 
	{
		while(result>=10)
		{
			e++;
			result/=10;
		}
	}
	else if(result<1)
	{
		while(result<1)
		{
			e--;
			result*=10;
		}
	}
	printf("%.6lfE%d",result,e);
return 0;
}