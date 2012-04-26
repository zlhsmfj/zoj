#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
	int N;
	int Need[1002];
	int Prepare[1002];
	int ans[1002];
	
	while(scanf("%d", &N) != EOF)
	{
		for(int i=0; i<N; ++i)
			scanf("%d", &Need[i]);
		for(int i=0; i<N; ++i)
			scanf("%d", &Prepare[i]);
		int needs = 0;
		for(int i=N-1; i>=0; --i)
		{
			ans[i] = needs + Need[i];
			if(ans[i]>Prepare[i])
			{
				needs = ans[i] - Prepare[i];
				ans[i] = Prepare[i];
			}
			else
				needs = 0;
		}
		if(needs>0)
			printf("Myon\n");
		else
		{
			for(int i=0; i<N; ++i)
			{
				if(i == 0)
					printf("%d", ans[i]);
				else
					printf(" %d", ans[i]);
			}
			printf("\n");
		}
	}
}