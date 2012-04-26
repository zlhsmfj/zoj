#include <cstdio>
#include <queue>
#include <cstdlib>
using namespace std;

struct pos
{
	int x;
	int y;
	int step;
};
typedef struct pos position;

bool if_reach[8][8];
int offset[8][2] = {{-2,-1}, {-2,1}, {-1,-2,}, {-1,2}, {1,-2}, {1,2}, {2,-1},{2,1}};

bool valid(int x, int y)
{
	if(x<0||x>7||y<0||y>7)
		return false;
	return true;
}

int main()
{
	char st[4],end[4];
	queue<position> myQueue;

	while(scanf("%s%s", st, end)!=EOF)
	{
		int stx = st[0] - 'a';
		int sty = st[1] - '1';
		int tarx = end[0] - 'a';
		int tary = end[1] - '1';
		position pos1,tmp,next;
		pos1.x = stx;
		pos1.y = sty;
		pos1.step = 0;

		for(int i=0; i<8; ++i)
			for(int j=0; j<8; ++j)
				if_reach[i][j] = false;
		myQueue.push(pos1);
		if_reach[stx][sty] = true;
		int ans = 0;
		while(!myQueue.empty())
		{
			tmp = myQueue.front();
			if(tmp.x == tarx && tmp.y == tary)
			{
				ans = tmp.step;
				break;
			}
			myQueue.pop();
			for(int i=0; i<8; ++i)
			{
				next.x = tmp.x + offset[i][0];
				next.y = tmp.y + offset[i][1];
				if(if_reach[next.x][next.y]||!valid(next.x,next.y))
					continue;
				next.step = tmp.step + 1;
				if_reach[next.x][next.y] = true;
				myQueue.push(next);
			}
		}
		while(!myQueue.empty())
			myQueue.pop();
		printf("To get from %s to %s takes %d knight moves.\n", st, end, ans);
	}
}