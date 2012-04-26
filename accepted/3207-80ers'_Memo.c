#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector <string> comem;
	string mem;
	int N;
	int K;
	int M;
	int ans;

	while(scanf("%d",&N)!=EOF)
	{
		while(N--)
		{
			cin>>mem;
			comem.push_back(mem);
		}
		scanf("%d",&K);
		while(K--)
		{
			ans=0;
			scanf("%d",&M);
			while(M--)
			{
				cin>>mem;
				vector<string>::iterator Result= find(comem.begin(),comem.end(),mem);
				if(Result!=comem.end())
					ans++;
			}
			cout<<ans<<endl;
		}
	}

	return 0;
}