#include <cstdio>
#include <cstdlib>
using namespace std;

int v[1200];
int main()
{
	int N,k;
	// 	freopen("in.txt","r",stdin);
	while(scanf("%d%d",&N,&k)!=EOF)
	{
		int wins=0;
		int num=1<<N;
		for(int i=0;i<num;++i)
			scanf("%d",&v[i]);
		int m=v[k];
		for(int i=0;i<num;++i)
			if(m>v[i])
				++wins;
		int min=1,max=0;
		wins++;
		if(wins!=num)
			min=0;
		while(wins/2)
		{
			max++;
			wins/=2;
		}
		if(min)
			min=max;
		printf("%d %d\n",min,max);
	}
	return 0;
}
//3295