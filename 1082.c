#include<stdio.h>

void Floyed(int A[][103],int n)
{
	int i,j,k;

	for(k=1;k<=n;k++)
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
			{
				if(i==k||j==k||i==j)
					continue;
				if(A[i][k]+A[k][j]<A[i][j])
				{
					A[i][j]=A[i][k]+A[k][j];
				}
			}
}

int main()
{
	int A[103][103],n,i,j,m,tmp,ans,max[103];
	while(scanf("%d",&n)&&n!=0)
	{
		
		for(i=1;i<=n;i++)
		{
			max[i]=0;
			for(j=1;j<=n;j++)
				A[i][j]=10000;
			scanf("%d",&m);
			while(m--)
			{
				scanf("%d%d",&j,&tmp);
				A[i][j]=tmp;
			}
		}
		Floyed(A,n);
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
			{
				if(i!=j&&max[i]<A[i][j])
					max[i]=A[i][j];
			}
		ans=10000;
		j=1;
		for(i=1;i<=n;i++)
			if(max[i]!=10000&&max[i]<ans)
			{
				ans=max[i];
				j=i;
			}
		if(ans==10000)
			printf("disjoint\n");
		else 
			printf("%d %d\n",j,ans);
	}
}
