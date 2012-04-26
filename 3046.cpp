#include <cstdio>
#include <cstdlib>
using namespace std;

bool isLetter(char c)
{
	if(c>='a'&&c<='z')
		return true;
	if(c>='A'&&c<='Z')
		return true;
	return false;
}

int main()
{
	// freopen("in.txt", "r", stdin);
	// freopen("out.txt", "w", stdout);
	
	char c;
	char line[10000];
	int num=0;
	while(c = getchar())
	{
		if(c == EOF)
			break;
		else if(c != '\n')
			line[num++] = c;
		else
		{
			// printf("AAA:%s\n",line);
			for(int i=0; i<num; ++i)
			{
				putchar(line[i]);
				int tmp = 0;
				while(isLetter(line[i])&&i<num)
				{
					++tmp;
					++i;
				}
				if(tmp > 2)
				{
					printf("%d", tmp-2);
					putchar(line[i-1]);
				}
				else if(tmp == 2)
					putchar(line[i-1]);
				if(i != num && tmp != 0)
					putchar(line[i]);
				// printf("i = %d\n", i);
			}
			putchar('\n');
			num = 0;
		}
	}
}