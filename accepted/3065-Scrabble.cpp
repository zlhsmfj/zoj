#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool flag[8];

inline bool proc(string a,string b,int n)
{
	int ans=0;
	if(a.size()>b.size())
		return false;
	memset(flag,0,sizeof(flag));
	for(int i=0;i<a.size();++i)
	{	
		int j;
		for(j=0;j<b.size();++j)
			if(flag[j])
				continue;
			else
			{
				if(a[i]==b[j])
				{
					flag[j]=true;
					break;
				}
			}
			if(j==b.size())
				ans++;
	}
	if(ans>n)
		return false;
	return true;
}

int main()
{
	int n;
	vector<string> dic;

	// 	freopen("in.txt","r",stdin);
	string str;

	while(cin>>n)
	{	
		if(n==0)
			break;
		for(int i=0;i<n;++i)
		{
			cin>>str;
			dic.push_back(str);
		}
		cin>>str;
		int num=0;
		for(int i=0;i<str.size();++i)
			if(str[i]=='_')
				num++;
		int ans=0;
		for(int i=0;i<n;++i)
			if(proc(dic[i],str,num))
				ans++;
		cout<<ans<<endl;
		dic.clear();
	}
	return 0;
}