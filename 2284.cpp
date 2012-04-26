#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
	long long ans[21][201];
	int i,j,k,n;
	
	ans[1][0]=1;
	for(i=1;i<201;i++)
		ans[1][i]=0;
	for(i=2;i<21;i++)
		for(k=0;k<201;k++)
		{
			ans[i][k]=0;
			if(k<=i*(i-1)/2)
			{
				for(j=k;k-j<i&&j>=0;j--)
					ans[i][k]+=ans[i-1][j];
			}
		}
	while(scanf("%d%d",&n,&k)&&!(n==0&&k==0))
	{
		cout<<ans[n][k]<<endl;
	}
	return 0;
}
