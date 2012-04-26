#include<stdio.h>

int main()
{
	int r,c[100],flagc,flagr,n;
	int i,j,p,ti,tj,ans;
	
	while(scanf("%d",&n)&&n!=0)
	{
		ans=0;
		flagc=0;
		for(i=0;i<n;i++)
		{
			r=0;
			for(j=0;j<n;j++)
			{
				if(i==0)
					c[j]=0;
				scanf("%d",&p);
				if(p==1)
				{
					r++;
					c[j]++;
				}
			}
			if(r%2&&flagc==1)
				ans=3;
			else if(r%2)
			{
				flagc=1;
				ti=i+1;
			}
		}
		flagr=0;
		for(i=0;i<n;i++)
			if(c[i]%2)
			{
				flagr++;
				tj=i+1;
			}
		if(ans==3||flagc!=flagr)
			printf("Corrupt\n");
		else if(flagc==flagr&&flagc)
			printf("Change bit (%d,%d)\n",ti,tj);
		else 
			printf("OK\n");
	}
	
	
	return 0;
}
