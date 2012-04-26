#include<stdio.h>
int main()
{
	int ans[31];
	int i,n,index;
	ans[1]=1;
	ans[2]=2;
	for(i=3;i<31;i++)
		ans[i]=ans[i-1]+ans[i-2]*2+1;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&index);
		printf("%d\n",ans[index]);
	}
	return 0;
}
