#include <cstdio>
using namespace std;

bool comp(int a,int b)
{
	if(a==b)
		return true;
	if(a>b)
		printf("cpcs\n");
	if(a<b)
		printf("javaman\n");
	return false;
}

int main()
{
	int N;
	int y1,m1,d1;
	int y2,m2,d2;
	
	while(scanf("%d",&N)!=EOF)
	{
		while(N--)
		{
			scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
			bool T = comp(y1,y2);
			if(T)
				T = comp(m1,m2);
			if(T)
				T = comp(d1,d2);
			if(T)
				printf("same\n");
		}
	}
}