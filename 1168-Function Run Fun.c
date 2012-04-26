#include<stdio.h>

int main()
{
	int w[21][21][21];
	int i,j,k;
	
	for(i=0;i<21;i++)
		for(j=0;j<21;j++)
		w[0][i][j]=w[i][j][0]=w[i][0][j]=1;
	for(i=1;i<21;i++)
		for(j=1;j<21;j++)
			for(k=1;k<21;k++)
			if(i<j&&j<k)
				w[i][j][k]=w[i][j][k-1]+w[i][j-1][k-1]-w[i][j-1][k];
			else
				w[i][j][k]=w[i-1][j][k]+w[i-1][j-1][k]+w[i-1][j][k-1]-w[i-1][j-1][k-1];
	
	while(scanf("%d%d%d",&i,&j,&k)&&!(i==-1&&j==-1&&k==-1))
	{
		if(i<=0||j<=0||k<=0)
			printf("w(%d, %d, %d) = %d\n",i,j,k,w[0][0][0]);
		else if(i>20||j>20||k>20)
			printf("w(%d, %d, %d) = %d\n",i,j,k,w[20][20][20]);
		else
			printf("w(%d, %d, %d) = %d\n",i,j,k,w[i][j][k]);
	}
	return 0;
}
