#include<stdio.h>

void reverse(int n,int i)
{
	if(i%2==1)
		n=n/10;
	while(n)
	{
		printf("%d",n%10);
		n/=10;
	}
	printf("\n");
}

int main()
{
	int i,j;
	char ans[30];
	int index;

	while(scanf("%d",&index)&&index>0)
	{
		long long zeros=1,num=0;
		long long temp;
		int fuck;
		for(i=0;i<30;i++)
		{
			if(i&&i%2==0)
				zeros*=10;
			temp=num;
			num+=zeros*9;
			if(num>=index)
			{
				num=temp;
				break;
			}
		}
		i++;
		if(i==1)
		{
			printf("%d\n",index);
			continue;
		}
		num=index-num;
		if(i==2)
		{
			printf("%d",num);
			printf("%d\n",num);
			continue;
		}
		temp=1;
		for(j=0;j<(i+1)/2-1;j++)
			temp*=10;
		temp=temp+num-1;
		printf("%d",temp);
		reverse(temp,i);
	}
	return 0;
}
