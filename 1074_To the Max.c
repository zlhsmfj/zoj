#include <stdio.h>

int a[100][100],b[100],n;

int max_subarray()
{
	int ThisSum=0,sum=-200;
	int i;

	for(i=0;i<n;i++)
	{
		ThisSum+=b[i];
		if(ThisSum>sum) 
			sum=ThisSum;
		else if(ThisSum<0)
			ThisSum=0;
	}
	return sum;  
}
int max_submatrix()
{
	int i,j,k,ThisSum=0,sum=-200;
   
	for(i=0;i<n;i++)
	{
		for(k=0;k<n;k++)
			b[k]=0;
		for(j=i;j<n;j++)
		{
			for(k=0;k<n;k++)
				b[k]+=a[j][k];
			ThisSum=max_subarray();  
			if(ThisSum>sum)
				sum=ThisSum;
		}
	}
	return sum;
}

int main()
{
    int i,j;

	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("%d\n",max_submatrix());
	return 0;
}
