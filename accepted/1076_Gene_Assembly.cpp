#include <cstdio>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

typedef struct gene
{
	int s;
	int e;
	int pos;
}gene;


vector<gene> exon;
int N;
int exon_num[1002][2];
int output[1002];

bool cmp(const gene &a, const gene &b)
{
	if(a.s < b.s || (a.s ==b.s && a.e <= b.e))
		return true;
	return false;
}

bool isBefore(gene x, gene y)
{
	if(x.e <= y.s)
		return true;
	return false;
}

int main()
{
	while(scanf("%d", &N)!=EOF&&N!=0)
	{
		gene tmp;
		for(int i=0; i<N; ++i)
		{
			scanf("%d%d", &tmp.s, &tmp.e);
			tmp.pos = i + 1;
			exon.push_back(tmp);
			exon_num[i][0] = 1;
			exon_num[i][1] = -1;
		}

		sort(exon.begin(), exon.end(), cmp);
		int ans = 0, index = 0;
		for(int i=1; i<N; ++i)
		{
			for(int j=0; j<i; ++j)
				if(isBefore(exon[j],exon[i]) && exon_num[j][0] + 1 > exon_num[i][0])
				{
					exon_num[i][0] = exon_num[j][0] + 1;
					exon_num[i][1] = j;
					if(exon_num[i][0] > ans)
					{
						ans = exon_num[i][0];
						index = i;
					}
				}
		}
		int of = 0;
		while(index != -1)
		{
			output[of++] = exon[index].pos;
			index = exon_num[index][1];
		}
		for(int i=of-1; i>=0; --i)
		{
			if(i!=of-1)
				printf(" ");
			printf("%d", output[i]);
		}
		printf("\n");
		exon.clear();
	}
	return 0;
}