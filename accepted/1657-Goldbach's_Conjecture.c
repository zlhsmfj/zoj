#include<stdio.h>
#include<math.h>

int isprime(int n)
{
	int i,flag=1;
	
	for (i=2;i<=sqrt(n);i++)
		if (n%i==0) 
		{
			flag=0;
			break;
		}
	if (flag==1) return 1;
	else return 0;
}


int main()
{
	int prime[32768],n,i;
	int ans;
	
	for(i=1;i<32768;i++)
		if(isprime(i))
			prime[i]=1;
		else
			prime[i]=0;
	
	while(scanf("%d",&n)&&n!=0)
	{
		ans=0;
		for(i=2;i<=n/2;i++)
			if(prime[i]&&prime[n-i])
				ans++;
		printf("%d\n",ans);
	}
	return 0;
}
