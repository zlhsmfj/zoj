#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct dna
{
	int inversion;
	char sequ[50];
}ddd;

int comp(const void *a,const void *b)
{
	return ((ddd *)a)->inversion-((ddd *)b)->inversion;
}

int main()
{
	int i,j,k;
	ddd dnaa[100];
	int T,m,n;
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&m,&n);
		for(i=0;i<n;i++)
		{
			scanf("%s",dnaa[i].sequ);
			dnaa[i].inversion=0;
			for(j=0;j<m;j++)
				for(k=j+1;k<m;k++)
					if(dnaa[i].sequ[j]>dnaa[i].sequ[k])
						dnaa[i].inversion++;
		}
		qsort(dnaa,n,sizeof(ddd),comp);
		for(i=0;i<n;i++)
			printf("%s\n",dnaa[i].sequ);
		if(T)
			printf("\n");
	}
	return 0;
}
