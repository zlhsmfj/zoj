#include<stdio.h>
#include<stdlib.h>

unsigned int exp[70000];
int prime[10]={2,3,5,7,11,13,17,19,23,29};

int comp(const void *a,const void *b) 
{ 
	return *(int *)a-*(int *)b; 
}

unsigned int an(int a,int n)
{
	int i;
	unsigned int ans=1;
	
	for(i=0;i<n;i++)
	{
		if(ans>=2147483648/a)
			return 0;
		ans*=a;
	}
	return ans;
}

int main()
{
	int i,j,n=0;
	unsigned int tmp;
	
	for(i=2;i<65536;i++)
		for(j=0;j<10;j++)
		{
			tmp=an(i,prime[j]);
			if(tmp>=2147483648||tmp==0)
				break;
			else
				exp[n++]=tmp;
		}
	qsort(exp,n,sizeof(int),comp);
	tmp=0;
	printf("%d\n",exp[0]);
	for(i=1;i<n;i++)
		if(exp[i]!=exp[i-1])
			printf("%d\n",exp[i]);
	return 0;
}
