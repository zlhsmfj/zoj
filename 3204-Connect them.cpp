#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

const int MAXN=101;

typedef struct Line
{
	int a;
	int b;
	int cost;
}LINE;

//int cost[MAXN][MAXN];
LINE line[MAXN*MAXN];
int v[MAXN];
vector <pair<int,int> > anspair;

bool comp(const LINE &a,const LINE &b)
{
	if(a.cost!=b.cost)
		return a.cost<b.cost;
	else if(a.a!=b.a)
		return a.a<b.a;
	else
		return a.b<b.b;
}

void init()
{
	for(int i=0;i<MAXN;i++)
		v[i]=i;
}

int find(int a)
{
	if(v[a]!=a)
		v[a]=find(v[a]);
	return v[a];
}

void Union(int a,int b)
{
	int fa=find(a);
	int fb=find(b);
	v[fa]=fb;
}

int Kruskal(int num)
{
	int ans=0;
	sort(line,line+num,comp);
	//	stable_sort(line,line+num,comp);
	for(int i=0;i<num;i++)
		if(find(line[i].a)==find(line[i].b))
			continue;
		else
		{
			Union(line[i].a,line[i].b);
			anspair.push_back(make_pair(line[i].a,line[i].b));
			ans+=line[i].cost;
		}
		return ans;
}

int main()
{
	int T,n;
	int cost,num;

	while(scanf("%d",&T)!=EOF)
	{
		while(T--)
		{
			init();
			num=0;
			scanf("%d",&n);
			for(int i=1;i<=n;i++)
				for(int j=1;j<=n;j++)
				{
					scanf("%d",&cost);
					if(i<j&&cost!=0)
					{
						line[num].a=i;
						line[num].b=j;
						line[num++].cost=cost;
						//						printf("%d %d: %d\n",i,j,cost);
					}
				}
				// 			for(int i=0;i<num;i++)
				// 				printf("%d %d: %d\n",line[i].a,line[i].b,line[i].cost);
				Kruskal(num);
				bool flag=false;
				int tmp=find(1);
				for(int i=1;i<=n;i++)
					if(find(i)!=tmp)
					{
						flag=true;
						break;
					}
					if(flag)
						printf("-1\n");
					else
					{
						sort(anspair.begin(),anspair.end());
						for(int i=0;i<anspair.size();i++)
							if(i)
								printf(" %d %d",anspair[i].first,anspair[i].second);
							else
								printf("%d %d",anspair[i].first,anspair[i].second);
						putchar('\n');
					}
					anspair.clear();
		}
	}

	return 0;
}