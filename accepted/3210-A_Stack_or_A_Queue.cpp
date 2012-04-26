#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{	
	vector<int> seq1;
	vector<int> seq2;
	int N;
	int M;
	int num;

	while(scanf("%d",&M)!=EOF)
	{
		while (M--)
		{
			cin>>N;
			for(int i=0;i<N;i++)
			{
				cin>>num;
				seq1.push_back(num);
			}
			for(int i=0;i<N;i++)
			{
				cin>>num;
				seq2.push_back(num);
			}
			bool isqueue=equal(seq1.begin(),seq1.end(),seq2.begin());
			reverse(seq1.begin(),seq1.end());
			bool isstack=equal(seq1.begin(),seq1.end(),seq2.begin());
			if(isqueue&&isstack)
				cout<<"both\n";
			else if(isqueue)
				cout<<"queue\n";
			else if(isstack)
				cout<<"stack\n";
			else
				cout<<"neither\n";
			seq1.clear();
			seq2.clear();
		}
	}

	return 0;
}