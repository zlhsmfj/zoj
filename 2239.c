#include<stdio.h>

int main()
{
	int ans,n,step,flag,ex;
	char str[5];
	while(scanf("%s",str))
	{
		n=(str[0]-'0')*10+str[1]-'0';
		ex=str[3]-'0';
		while(ex--)
		{
			n*=10;
		}
		if(n==0)
			break;
		/*
printf("n=%d\n",n);*/
		step=0;
		ans=1;
		flag=0;
		while(n>1)
		{
			if(flag)
				ans+=1<<step;
			if(n%2==0)
			{
				n/=2;
				flag=flag;
			}
			else 
			{
				if(flag==0)
					n=n/2+1;
				else n=n/2;
				flag=!flag;
			}
			step++;
			/*
printf("flag=%d,step=%d,ans=%d,n=%d\n",flag,step,ans,n);*/
		}
		printf("%d\n",ans);
	}
	return 0;
}
