#include<stdio.h>
#include<math.h>

int main()
{
	int ans[51];
	int i,j,flag;
	int peg=0;
	int num[50];
	double sqt;
	int T,n;
	
	for(i=1;;i++)
	{
		flag=0;
		for(j=0;j<peg;j++)
		{
			sqt=sqrt(num[j]+i+0.0);
			if(sqt==(int)sqt)
			{
				num[j]=i;
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			ans[peg]=i-1;
			num[peg]=i;
			peg++;
		}
		if(peg==51)
			break;
	}
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		printf("%d\n",ans[n]);
	}
	return 0;
}
