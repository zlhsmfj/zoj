#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <cstdlib>

using namespace std;

int main()
{
	int T,n;
	int i;
	int pos,maxpos,minpos;

	while(scanf("%d",&T)!=EOF)
	{
		while(T--)
		{
			maxpos=0;
			minpos=100;
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				scanf("%d",&pos);
				if(pos>maxpos)
					maxpos=pos;
				if(pos<minpos)
					minpos=pos;
			}
			printf("%d\n",2*(maxpos-minpos));
		}
	}

	return 0;
}