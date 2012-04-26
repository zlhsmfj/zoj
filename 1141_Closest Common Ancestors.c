#include<stdio.h>
#include<string.h>

int father[1000],flag[1000];

void input(char c)
{
	char cc=getchar();
	while(cc!=c)
		cc=getchar();
}

int findCom(int a,int b)
{
	int tmpa=a,tmpb;
	
	while(tmpa)
	{
		tmpb=b;
		while(tmpb)
		{
			if(tmpa==tmpb)
			{
				flag[tmpa]++;
				return 1;
			}
			tmpb=father[tmpb];
		}
		tmpa=father[tmpa];
	}
}

int main()
{
	int n_ver,n_pair;
	int i,j;
	int son_node,ver,n_suc;
	char c;
	int a_node,b_node;
	
	while(scanf("%d",&n_ver)!=EOF)
	{
		memset(father,0,sizeof(father));
		memset(flag,0,sizeof(flag));
		for(i=0;i<n_ver;i++)
		{
			scanf("%d",&ver);
			input('(');
			scanf("%d",&n_suc);
			input(')');
			for(j=0;j<n_suc;j++)
			{
				scanf("%d",&son_node);
				father[son_node]=ver;
			}
		}
		scanf("%d",&n_pair);
		for(j=0;j<n_pair;j++)
		{
			input('(');
			scanf("%d",&a_node);
			input(',');
			scanf("%d",&b_node);
			input(')');
			findCom(a_node,b_node);		
		}
		for(i=1;i<=n_ver;i++)
			if(flag[i])
				printf("%d:%d\n",i,flag[i]);
	}
	return 0;
}
