#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <cstdlib>

using namespace std;

int factor[1000001];
int ans[1000001];

int main()
{
	int i,j,n;
	int dp[200];

	for(i=0;i<1000001;i++)
		factor[i]=2;
	for(i=0;i<200;i++)
		dp[i]=0;
	//  	memset(factor,0,1000001*sizeof(int));
	//  	memset(dp,0,200*sizeof(int));
	factor[1]=1;
	for(i=2;i<500001;i++)
		for(j=2;j<=i&&i*j<1000001;j++)
			if(j==i)
				factor[i*j]++;
			else
				factor[i*j]+=2;
	for(i=1;i<1000001;i++)
	{
		ans[i]=dp[factor[i]];
		dp[factor[i]]++;
	}
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",ans[n]);
	}

	return 0;
}