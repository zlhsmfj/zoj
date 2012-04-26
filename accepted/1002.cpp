#include <cstdio>
#include <cstdlib>
using namespace std;

char city[17];
int hasBlockhouse[17];
int N;
int offset;

bool isLegal(int pm)
{
	int x = pm/N;
	int y = pm%N;
	
	for(int i=x-1; i>=0; --i)
		if(city[i*N+y] == 'X')
			break;
		else if(hasBlockhouse[i*N+y] == 1)
			return false;
	for(int i=y-1; i>=0; --i)
		if(city[x*N+i] == 'X')
			break;
		else if(hasBlockhouse[x*N+i] == 1)
			return false;
	return true;
}

int gao(int m)
{
	int ret = 0;
	int n = m;
	for(int i=0; i<offset; ++i)
	{
		hasBlockhouse[i] = n%2;
		if(city[i] == 'X' && hasBlockhouse[i] == 1)
			return 0;
		if(hasBlockhouse[i] == 1 && isLegal(i))
			ret++;
		n /= 2;
	}
	return ret;
}

int main()
{
	char str[5];
	while(scanf("%d",&N)!=EOF && N>0 && N<5)
	{
		int ans = 0;
		offset = 0;
		for(int i=0; i<N;++i)
		{
			scanf("%s", str);
			for(int j=0; j<N; ++j)
				city[offset+j] = str[j];
			offset += N;
		}
		for(int i=0; i<(1<<offset); ++i)
		{
			int tmp = gao(i);
			if(tmp > ans)
				ans = tmp;
		}
		printf("%d\n",ans);
	}
}