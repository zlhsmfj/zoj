#include <iostream>
using namespace std;

const int MAXN=10;
int v[MAXN];
int degree[MAXN];

void init()
{
	for(int i=0;i<MAXN;i++)
	{
		v[i]=i;
		degree[i]=0;
	}
}
int find(int Id)
{
	if(v[Id]!=Id)
		v[Id] = find(v[Id]);
	return v[Id];
}

int Union(int a,int b)
{
	int fa=find(a);
	int fb=find(b);
	v[fa]=fb;
	return fb;
}

// const int MA = 1001;
// 
// class DSet {
// 	int s[MA], n;
// public:
// 	DSet(int _n = 100)
// 		: n(_n) {
// 		for(int i = 0; i < n; i ++)
// 			s[i] = i;
// 	}
// 	int getR(int r) {
// 		if(s[r] != r)
// 			s[r] = getR(s[r]);
// 		return s[r];
// 	}
// 	void uunion(int r1, int r2) {
// 		s[getR(r1)] = getR(r2);
// 	}
// 
// };

int main()
{
	int m,n;
	int node1,node2;

	while(scanf("%d%d",&n,&m)!=EOF)
	{
/*		DSet dset(n);*/

		init();
		bool flag=false;
		for(int i=0;i<m;i++)
		{
			scanf("%d%d",&node1,&node2);
			Union(node1,node2);
			degree[node1]++;
			degree[node2]++;
		}

		for(int i=1;i<=n;i++)
			if(v[i]!=v[1]||degree[i]!=2)
			{
				flag=true;
				break;
			}
		if(flag)
			printf("NO\n");
		else
			printf("YES\n");
	}

	return 0;
}