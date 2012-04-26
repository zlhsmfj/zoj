#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,flag,num;
	char num1[120],num2[120],sum[150];

	while(scanf("%s%s",num1,num2)!=EOF)
	{
		i=strlen(num1);
		j=strlen(num2);
		for(k=0;k<i;k++)
			if(num1[k]<='9'&&num1[k]>='0')
				num1[k]-='0';
			else if(num1[k]>='a'&&num1[k]<='j')
				num1[k]-='a'-10;
			else return 0;
		for(k=0;k<j;k++)
			if(num2[k]<='9'&&num2[k]>='0')
				num2[k]-='0';
			else if(num2[k]>='a'&&num2[k]<='j')
				num2[k]-='a'-10;
			else return 0;
		flag=0;
		if(i>j)
		{
			k=i;
			num=i+1;
		while(j--)
		{
			i--;
			sum[k]=num1[i]+num2[j]+flag;
			if(sum[k]>19)
			{
				sum[k]-=20;
				flag=1;
			}
			else flag=0;
			k--;
		}
		while(i--)
		{
			sum[k]=num1[i]+flag;
			if(sum[k]>19)
			{
				sum[k]-=20;
				flag=1;
			}
			else flag=0;
			k--;
		}
		if(flag) sum[k--]=flag;
		}
		else
		{
			k=j;
			num=j+1;
		while(i--)
		{
			j--;
			sum[k]=num1[i]+num2[j]+flag;
			if(sum[k]>19)
			{
				sum[k]-=20;
				flag=1;
			}
			else flag=0;
			k--;
		}
		while(j--)
		{
			sum[k]=num2[j]+flag;
			if(sum[k]>19)
			{
				sum[k]-=20;
				flag=1;
			}
			else flag=0;
			k--;
		}
		if(flag) sum[k--]=flag;
		}
		while(1)
		{
			k++;
			if(k==num) break;
			if(sum[k]<=9)
				putchar(sum[k]+'0');
			else putchar(sum[k]-10+'a');
		}
		putchar('\n');

	}
	return 0;
}
