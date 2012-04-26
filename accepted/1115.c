#include<stdio.h>
#include<string.h>
long f(long n)
{
	long m=0;
	while(n)
	{
		m+=n%10;
		n/=10;
	}
	return m;
}
main()
{
	long n;
	int i;
	char s[1000];
	while(1)
	{
		gets(s);
		if(s[0]=='0') break;
		for(i=0;s[i];i++)
			if(s[i]<'0'||s[i]>'9')
				goto s1;
		n=0;
		for(i=0;s[i];i++)
			n+=s[i]-'0';
		while(n>=10)
			n=f(n);
		printf("%ld\n",n);
	}
    s1: ;
}
