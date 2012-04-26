#include<stdio.h>
#include<stdlib.h>

typedef struct mouse
{
	int wei;
	int speed;
	int index;
}aaa;

int comp(const void *a,const void *b)
{
	return ((aaa *)a)->wei-((aaa *)b)->wei;
}

int main()
{
	aaa mice[1000];
	int n=0;
	int i,j;
	int father[1000];
	int now,tmp,num[1000];
	
	while(scanf("%d%d",&mice[n].wei,&mice[n].speed)!=EOF)
	{
		mice[n].index=n;
		n++;
	}
	qsort(mice,n,sizeof(aaa),comp);

	for(i=0;i<n;i++)
	{
		num[i]=0;
		father[i]=-1;
	}
	for(i=n-2;i>=0;i--)
		for(j=i+1;j<n;j++)
			if(mice[i].wei!=mice[j].wei&&mice[i].speed>mice[j].speed&&num[j]+1>num[i])
			{
				father[i]=j;
				num[i]=num[j]+1;
			}
	
	now=-1;
	tmp=0;
	for(i=0;i<n;i++)
		if(num[i]>tmp)
		{
			tmp=num[i];
			now=i;
		}
	printf("%d\n",tmp+1);
	while(father[now]!=-1)
	{
		printf("%d\n",mice[now].index+1);
		now=father[now];
	}
	printf("%d\n",mice[now].index+1);
	
	return 0;
}
