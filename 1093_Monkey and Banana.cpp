#include <cstdio>
#include <cstring> //memset() = =
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct block
{
	int x;
	int y;
	int z;
}block;

vector<block> bls;
int height[100];

int max(int x, int y)
{
	if(x>=y)
		return x;
	return y;
}

int min(int x, int y)
{
	if(x<y)
		return x;
	return y;
}

void pro(block bl)
{
	int x = bl.x;
	int y = bl.y;
	int z = bl.z;

	bl.x = max(x, y);
	bl.y = min(x, y);
	bls.push_back(bl);

	bl.z = x;
	bl.x = max(z, y);
	bl.y = min(z, y);
	bls.push_back(bl);

	bl.z = y;
	bl.x = max(x, z);
	bl.y = min(x, z);
	bls.push_back(bl);
}

bool cmp(const block &b1, const block &b2)
{
	if(b1.x<b2.x)
		return true;
	return false;
// 	if(b1.x>b2.x)
// 		return false;
// 	if(b1.y<b2.y)
// 		return true;
// 	if(b1.y>b2.y)
// 		return false;
// 	if(b1.z<b2.z)
// 		return true;
// 	if(b1.z>b2.z)
// 		return false;
// 	return true;
}

bool canPut(block a, block b)
{
	if(a.x>b.x&&a.y>b.y)
		return true;
	return false;
}

int main()
{
	int N,cas = 0;
	block tmpin;
	while(scanf("%d", &N)!=EOF && N!=0)
	{
		cas++;
		for(int i=0; i<N; ++i)
		{
			scanf("%d%d%d", &tmpin.x, &tmpin.y, &tmpin.z);
			pro(tmpin);
		}

		sort(bls.begin(), bls.end(), cmp);
		memset(height, 0, sizeof(height));
		height[0] = bls[0].z;
		for(int i=1; i<bls.size(); ++i)
		{
			height[i] = bls[i].z;
			for(int j=0; j<i; ++j)
				if(canPut(bls[i], bls[j]) && height[j] + bls[i].z > height[i])
					height[i] = height[j] + bls[i].z;
		}
		int ans = 0;
		for(int i=0; i<bls.size(); ++i)
			if(ans < height[i])
				ans = height[i];
		printf("Case %d: maximum height = %d\n", cas, ans);
		bls.clear();
	}
}