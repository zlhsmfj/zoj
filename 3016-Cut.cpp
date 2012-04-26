#include <map>
#include <vector>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

const bool X=true;
const bool Y=false;
const int MAXN=1201;
typedef pair<int,int> PP;

typedef struct pp
{
	bool xory;
	int x1;
	int y1;
	int x2;
	int y2;
	int len;
}line;

typedef struct qq
{
	int x;
	int y;
	int dist;
}edge;

line p[610];
map<PP,int> eg;
vector<int> xx,yy;
map<int,int> mx,my;
bool flag[MAXN*MAXN][4];
vector<edge> egeg; 

int lenx,leny,len;
int v[MAXN*MAXN+1];

void preproc(int N)
{
	sort(xx.begin(),xx.end());
	sort(yy.begin(),yy.end());
	xx.erase(unique(xx.begin(),xx.end()),xx.end());
	yy.erase(unique(yy.begin(),yy.end()),yy.end());
	lenx=xx.size();
	leny=yy.size();
	for(int i=0;i<lenx;++i)
		mx[xx[i]]=i;
	for(int i=0;i<leny;++i)
		my[yy[i]]=i;
	for(int i=0;i<N;++i)
	{
		p[i].x1=mx[p[i].x1];
		p[i].x2=mx[p[i].x2];
		p[i].y1=my[p[i].y1];
		p[i].y2=my[p[i].y2];
		if(p[i].x1==p[i].x2)
			p[i].xory=Y;
		else
			p[i].xory=X;
	}
	lenx--;
	leny--;
	for(int i=0;i<leny;++i)
		for(int j=0;j<lenx;++j)
		{
			int st=i*lenx+j;
			v[st]=st;
		}
		v[lenx*leny]=lenx*leny;
		memset(flag,0,sizeof(flag));
}

void proc(int N)
{
	int st,end;
	for(int i=0;i<N;++i)
	{
		// 		printf("d:%d %d %d\n",lenx,leny,p[i].x1);
		if(p[i].xory==Y)
		{
			//×ó±ß
			if(p[i].x1==0)
			{
				for(int y=p[i].y1;y<p[i].y2;++y)
				{
					st=y*lenx+p[i].x1;
					if(eg.find(make_pair(st,lenx*leny))==eg.end()||eg[make_pair(st,lenx*leny)]>p[i].len)
						eg[make_pair(st,lenx*leny)]=p[i].len;
					flag[st][0]=true;
					// 					printf("i=%d,j=%d:st=%d  %d\n",y,p[i].x1,st,p[i].len);			
				}
			}
			//ÓÒ±ß
			else if(p[i].x1==lenx)
			{
				for(int y=p[i].y1;y<p[i].y2;++y)
				{
					st=y*lenx+p[i].x1-1;
					if(eg.find(make_pair(st,lenx*leny))==eg.end()||eg[make_pair(st,lenx*leny)]>p[i].len)
						eg[make_pair(st,lenx*leny)]=p[i].len;
					flag[st][2]=true;
				}
			}
			else
			{
				//				printf("%d: %d %d\n",i,p[i].y1,p[i].y2);
				for(int y=p[i].y1;y<p[i].y2;++y)
				{
					//					printf("x=%d,y=%d\n",x,p[i].x1);
					st=y*lenx+p[i].x1;
					eg[make_pair(st-1,st)]=p[i].len;
					flag[st-1][2]=true;
					// 					printf("%d:(%d,%d)\n",i,st-1,st);
				}
			}
		}
		else
		{
			//ÉÏ±ß
			if(p[i].y1==0)
			{
				for(int x=p[i].x1;x<p[i].x2;++x)
				{
					st=x;
					if(eg.find(make_pair(st,lenx*leny))==eg.end()||eg[make_pair(st,lenx*leny)]>p[i].len)
						eg[make_pair(st,lenx*leny)]=p[i].len;
					flag[st][1]=true;
				}
			}
			//ÏÂ±ß
			else if(p[i].y1==leny)
			{
				for(int x=p[i].x1;x<p[i].x2;++x)
				{
					st=(leny-1)*lenx+x;
					if(eg.find(make_pair(st,lenx*leny))==eg.end()||eg[make_pair(st,lenx*leny)]>p[i].len)				
						eg[make_pair(st,lenx*leny)]=p[i].len;
					flag[st][3]=true;
				}
			}
			else
			{
				for(int x=p[i].x1;x<p[i].x2;++x)
				{
					//					printf("(i=%d,j=%d)-ÏÂ±ß\n",p[i].y1,y);
					st=p[i].y1*lenx+x;
					eg[make_pair(st-lenx,st)]=p[i].len;
					flag[st-lenx][3]=true;
					//					printf("i=%d,j=%d,index=%d dkasjfk\n",p[i].y1-1,y,st-lenx);
				}
			}
		}
	}

	// 	for(int i=0;i<leny;++i)
	// 		for(int j=0;j<lenx;++j)
	// 			printf("(%d,%d):%d %d %d %d\n",i,j,flag[i*lenx+j][0],flag[i*lenx+j][1],flag[i*lenx+j][2],flag[i*lenx+j][3]);
	// 
	for(int i=0;i<leny-1;++i)
		for(int j=0;j<lenx-1;++j)    /////
		{
			st=i*lenx+j;
			if(!flag[st][2])
				eg[make_pair(st,st+1)]=0;
			if(!flag[st][3])
				eg[make_pair(st,st+lenx)]=0;
		}
		//×ó±ßºÍÓÒ±ß
		for(int i=0;i<leny;++i)
		{
			if(!flag[i*lenx][0])
				eg[make_pair(i*lenx,lenx*leny)]=0;
			if(!flag[i*lenx+lenx-1][2])
				eg[make_pair(i*lenx+lenx-1,lenx*leny)]=0;
			if(i!=leny-1&&!flag[i*lenx+lenx-1][3])
				eg[make_pair(i*lenx+lenx-1,i*lenx+lenx-1+lenx)]=0;
		}
		//ÉÏ±ßºÍÏÂ±ß
		for(int j=0;j<lenx;++j)
		{
			if(!flag[j][1])
				eg[make_pair(j,lenx*leny)]=0;
			if(!flag[(leny-1)*lenx+j][3])
				eg[make_pair((leny-1)*lenx+j,lenx*leny)]=0;
			if(j!=lenx-1&&!flag[(leny-1)*lenx+j][2])
				eg[make_pair((leny-1)*lenx+j,(leny-1)*lenx+j+1)]=0;
		}
		// 	for(int i=0;i<leny;++i)
		// 		for(int j=0;j<lenx;++j)
		// 		{
		// 			printf("(%d,%d) ÓÒ±ß =%d;  ",i,j,eg[make_pair(i*lenx+j,i*lenx+j+1)]);
		// 			printf(" ÏÂ±ß =%d\n",eg[make_pair(i*lenx+j,i*lenx+j+lenx)]);
		// 		}
		// 	for(int i=0;i<lenx;++i)
		// 		printf("%d\n",eg[make_pair(i,lenx*leny)]);
}

int find(int A)
{
	if(v[A]!=A)
		v[A]=find(v[A]);
	return v[A];
}

void Union(int A,int B)
{
	v[find(A)]=find(B);
}

bool comp(const edge &a,const edge &b)
{
	return a.dist<b.dist;
}

void Kruskal()
{
	long long ans=0;
	edge mp;
	for(map<PP,int>::iterator i=eg.begin();i!=eg.end();++i)
	{
		mp.x=i->first.first;
		mp.y=i->first.second;
		mp.dist=i->second;
		egeg.push_back(mp);
	}
	sort(egeg.begin(),egeg.end(),comp);
	// 	for(vector<edge>::iterator i=egeg.begin();i!=egeg.end();++i)
	// 	{
	// 		printf("A=%d,B=%d,dist=%d\n",i->x,i->y,i->dist);
	// 	}
	for(vector<edge>::iterator i=egeg.begin();i!=egeg.end();++i)
		if(find(i->x)==find(i->y))
			continue;
		else
		{
			Union(i->x,i->y);
			/*			printf("union:A=%d,B=%d\n",i->x,i->y);*/
			ans+=i->dist;
		}
		printf("%lld\n",ans);
}

void destroy()
{
	xx.clear();
	yy.clear();
	mx.clear();
	my.clear();
	eg.clear();
	egeg.clear();
}

int main()
{
	int T,N;

	// 	freopen("in.txt","r",stdin);

	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		for(int i=0;i<N;++i)
		{
			scanf("%d%d%d%d%d",&p[i].x1,&p[i].y1,&p[i].x2,&p[i].y2,&p[i].len);
			xx.push_back(p[i].x1);
			yy.push_back(p[i].y1);
			if(p[i].x2!=p[i].x1)
				xx.push_back(p[i].x2);
			if(p[i].y2!=p[i].y1)
				yy.push_back(p[i].y2);
		}
		preproc(N);
		proc(N);
		Kruskal();
		destroy();
	}
	return 0;
}