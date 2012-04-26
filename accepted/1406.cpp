#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

const int MAXN=100;

typedef struct Edge
{
	int dist;
	char A;
	char B;
}edge;

edge e[MAXN];
char v[128];

void init()
{
	for(int i='A';i<'Z'+1;i++)
		v[i]=i;
}

char find(char A)
{
	if(v[A]!=A)
		v[A]=find(v[A]);
	return v[A];
}

char Union(char A,char B)
{
	char fa=find(A);
	char fb=find(B);
	v[fa]=fb;
	return fb;
}

bool comp(const edge &a,const edge &b)
{
	return a.dist<b.dist;
}

int Kruskal(int edge_num)
{
	int ans=0;
	sort(e,e+edge_num,comp);
	for(int i=0;i<edge_num;i++)
		if(find(e[i].A)==find(e[i].B))
			continue;
		else
		{
			Union(e[i].A,e[i].B);
			ans+=e[i].dist;
		}
	return ans;
}

int main()
{
	int n,edge_num;
	int node1,node2;
	int num,len;

	while(scanf("%d",&n)!=EOF&&n>0)
	{
		num=0;
		init();
		getchar();
		for(int i=1;i<n;i++)
		{
			scanf("%c%d",&node1,&edge_num);
			getchar();
			for(int j=0;j<edge_num;j++)
			{
				scanf("%c%d",&node2,&len);
				getchar();
				e[num].dist=len;
				e[num].A=node1;
				e[num++].B=node2;
			}
		}
		int ans=Kruskal(num);
		printf("%d\n",ans);
	}

	return 0;
}