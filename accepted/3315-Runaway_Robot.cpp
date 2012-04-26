#include <vector>
#include <algorithm>
#include <cstring>
#define MAXN 110

using namespace std;

char smap[MAXN][MAXN];
int v[MAXN][MAXN];

bool comp(const pair<int,int> &p,const pair<int,int> &q)
{
	return (p.first+p.second)<(q.first+q.second);
}

bool cal(int sx,int sy,int dx,int dy)
{
	if(v[sx][sy]==0) return false;

	for(int i=1+sx;i<dx+sx;i++)
		v[i][sy]&=v[i-1][sy];
	for(int i=1+sy;i<dy+sy;i++)
		v[sx][i]&=v[sx][i-1];

	for(int i=1+sx;i<dx+sx;i++)
		for(int j=1+sy;j<dy+sy;j++)
			v[i][j]&=v[i][j-1]|v[i-1][j];
	if(v[sx+dx-1][sy+dy-1]==1)
		return true;
	return false;
}

int main()
{
	int C,R;
	int ans;
	vector< pair<int,int> > sub;

	while(scanf("%d%d",&R,&C)!=EOF)
	{
		for(int i=0;i<C;i++)
			scanf("%s",smap[i]);
		for(int i=2;i<=C;i++)
			for(int j=2;j<=R;j++)
				sub.push_back(make_pair(i,j));
		sort(sub.begin(),sub.end(),comp);

		ans=-1;
		for(int i=0;i<sub.size();i++)
		{
			int dx=sub[i].first,dy=sub[i].second;

			int k=min((C-1)/(dx-1),(R-1)/(dy-1));
			if((k+1)*(dx-1)<C-1||(k+1)*(dy-1)<R-1)
				continue;

			for(int x=0;x<dx;x++)
				for(int y=0;y<dy;y++)
					v[x][y]=1;

			int sx,sy;
			for(sx=0,sy=0;k >= 0;sx+=dx-1,sy+=dy-1, k--)
			{
				for(int x=0;x<dx;x++)
					for(int y=0;y<dy;y++)
						if(sx+x<=C-1&&sy+y<=R-1&&smap[sx+x][sy+y]=='X')
							v[x][y]=0;
			}

			sx-=dx-1;sy-=dy-1;
			int tarx=C-1-sx,tary=R-1-sy;
			bool Y=cal(0,0,tarx+1,tary+1)&&cal(tarx,tary,dx-tarx,dy-tary);
			if(Y)
			{
				ans=dx+dy-2;
				break;
			}
		}
		printf("%d\n",ans);
		sub.clear();
	}
	return 0;
}