/*
 * acm.cpp
 *
 *  Created on: 2010-10-25
 *      Author: zlhlsmfj
 */

//3414

#include <cmath>
#include <cstdio>
using namespace std;

typedef struct Point
{
	double x;
	double y;
}Vector;

double getDist(Point a, Point b)
{
	return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}

Vector getCkp(Point a, Point b, double p)
{
	Vector ret;
	ret.x = a.x + (b.x - a.x) * p;
	ret.y = a.y + (b.y - a.y) * p;
	return ret;
}

int main()
{
	Point endPoints[1001];
	double dist[1001];
	int n,m;
	int cas = 0;

	// freopen("in.txt", "r", stdin);
	// freopen("mout.txt", "w", stdout);
	
	while(scanf("%d%d", &n, &m)!=EOF)
	{
		double sumDist = 0;
		cas++;
		endPoints[0].x = 0;
		endPoints[0].y = 0;
		dist[0] = 0;
		for(int i=1; i<=n; ++i)
		{
			scanf("%lf%lf", &endPoints[i].x, &endPoints[i].y);
			dist[i] = getDist(endPoints[i-1],endPoints[i]);
			sumDist += dist[i];
		}
		double adjDist = sumDist/(m+1);
		double tmpDist = 0;
		int segNum = 1;
		double distToNextSeg = dist[1];
		printf("Route %d\n",cas);
		Point  ckPoint = endPoints[0];
		// printf("Dists = %.3f, adjDist = %.3f\n", sumDist, adjDist);
		for(int i=1; i<=m; ++i)
		{
			tmpDist += adjDist;
			while(distToNextSeg <= tmpDist)
			{
				segNum++;
				tmpDist -= distToNextSeg;
				distToNextSeg = dist[segNum];
			}
			ckPoint = getCkp(endPoints[segNum-1], endPoints[segNum], tmpDist/dist[segNum]);
			printf("CP%d: (%.3f, %.3f)\n", i, ckPoint.x, ckPoint.y);
		}
	}
}
