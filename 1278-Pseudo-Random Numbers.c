#include<stdio.h>
#include<string.h>

int main()
{
	int psr[10000];
	int i,z,n,m,l,tmp,cas=0;
	
	while(scanf("%d%d%d%d",&z,&n,&m,&l)&&!(z==0&&n==0&&m==0&&l==0))
	{
		cas++;
		for(i=0;i<m;i++)
			psr[i]=0;
		psr[l]=1;
		for(i=1;;i++)
		{
			tmp=(z*l+n)%m;
			if(psr[tmp]!=0)
			{
				break;
			}
			else
				psr[tmp]=i+1;
			l=tmp;
		}
		printf("Case %d: %d\n",cas,i-psr[tmp]+1);
	}
	return 0;	
}
