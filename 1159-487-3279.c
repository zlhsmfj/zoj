#include<stdio.h>
#include<stdlib.h>

int telnum[100001];
int fff[25]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9};

int comp(const void *a,const void *b) 
{ 
	return *(int *)a-*(int *)b; 
}

int main()
{
	char str[100];
	int i,j;
	int T,n,tmp,flag;
	
	scanf("%d",&T);
	while(T--)
	{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		telnum[i]=0;
		for(j=0;str[j]!='\0';j++)
		{
			if(str[j]>='A'&&str[j]<'Z'&&str[j]!='Q')
				telnum[i]=telnum[i]*10+fff[str[j]-'A'];
			else if(str[j]>='0'&&str[j]<='9')
				telnum[i]=telnum[i]*10+str[j]-'0';
		}
	}
	flag=1;
	j=0;
	qsort(telnum,n,sizeof(int),comp);
	for(i=1;i<n;i++)
	{
		if(telnum[i]==telnum[i-1])
		{
			flag++;	
			j=1;
		}
		else if(flag>1)
		{
			tmp=telnum[i-1];
			str[8]='\0';
			for(j=7;j>=0;j--)
			{
				if(j==3)
					str[j]='-';
				else
				{
					str[j]=tmp%10+'0';
					tmp=tmp/10;
				}
			}
			printf("%s %d\n",str,flag);
			flag=1;
		}
	}
	if(flag>1)
	{
		tmp=telnum[i-1];
		str[8]='\0';
		for(j=7;j>=0;j--)
		{
			if(j==3)
				str[j]='-';
			else
			{
				str[j]=tmp%10+'0';
				tmp=tmp/10;
			}
		}
		printf("%s %d\n",str,flag);
	}
	if(j==0)
		printf("No duplicates.\n");
	if(T)
		printf("\n");
	}
	return 0;
}
