#include <cstdio>

using namespace std;
const int MAXN=1001;
int num[MAXN];

inline int proc(int pp,int n)
{
	int ans=0;
	if(pp==0)
		return 0;
	for(int i=0;i<n;++i)
		if((pp^num[i])<=num[i])
			ans++;
	return ans;
}

int main()
{
	int n,pp;
	while(scanf("%d",&n)!=EOF&&n>0)
	{
		pp=0;
		for(int i=0;i<n;++i){
			scanf("%d",&num[i]);
			pp=pp^num[i];
		}
		printf("%d\n",proc(pp,n));
	}
	return 0;
}