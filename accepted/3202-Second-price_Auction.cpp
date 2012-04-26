#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{	
	int bid;
	int i,N,T;
	int bidder,high,sehi;

	while(scanf("%d",&T)!=EOF)
	{
		while(T--)
		{
			high=0;
			sehi=0;
			scanf("%d",&N);
			for(i=0;i<N;i++)
			{
				scanf("%d",&bid);
				if(bid>high)
				{
					sehi=high;
					high=bid;
					bidder=i;
				}
				else if(bid>sehi)
					sehi=bid;
			}
			printf("%d %d\n",bidder+1,sehi);
		}
	}

	return 0;
}