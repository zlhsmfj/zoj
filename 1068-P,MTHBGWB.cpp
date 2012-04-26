#include <map>
#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

map<char, string> M;
map<string,char> M1;

void init() {
	M['A'] =  ".-";
	M['B'] =  "-...";
	M['C'] =  "-.-.";
	M['D'] =  "-..";
	M['E'] =  ".";
	M['F'] =  "..-.";
	M['G'] =  "--.";
	M['H'] =  "....";
	M['I'] =  "..";
	M['J'] =  ".---";
	M['K'] =  "-.-";
	M['L'] =  ".-..";
	M['M'] =  "--";
	M['N'] =  "-.";
	M['O'] =  "---";
	M['P'] =  ".--.";
	M['Q'] =  "--.-";
	M['R'] =  ".-.";
	M['S'] =  "...";
	M['T'] =  "-";
	M['U'] =  "..-";
	M['V'] =  "...-";
	M['W'] =  ".--";
	M['X'] =  "-..-";
	M['Y'] =  "-.--";
	M['Z'] =  "--..";
	M['_'] =  "..--";
	M['.'] =  "---.";
	M[','] =  ".-.-";
	M['?'] =  "----";
	for(map<char, string> ::iterator i=M.begin();i!=M.end();++i)
		M1[i->second]=i->first;
}



int main()
{
	// 	for(int i=0;i<26;i++)
	// 		printf("M[\'%c\'] =  \"%s\";\n",i+'A',ss[i].c_str());
	// 	printf("M[\'%c\'] =  \"%s\";\n", '_', "..--");
	// 	printf("M[\'%c\'] =  \"%s\";\n", '.', "---.");
	// 	printf("M[\'%c\'] =  \"%s\";\n", ',', ".-.-");
	// 	printf("M[\'%c\'] =  \"%s\";\n", '?', "----");

	int n;
	string str,mos,len;

	init();
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		mos=len="";
		cin>>str;
		for(int j=0;j<str.length();++j)
		{
			mos+=M[str[j]];
			len+=M[str[j]].length()+'0';
		}
		reverse(len.begin(),len.end());
		str="";
		int st=0;
		for(int j=0;j<len.length();++j)
		{
			str+=M1[mos.substr(st,len[j]-'0')];
			st+=len[j]-'0';
		}
		cout<<i<<": "<<str<<endl;
	}

	return 0;
}