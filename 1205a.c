#include "stdio.h"
#include<string.h>
void f(char a[],int m,char b[],int n,char c[])
{
   int i,s,k;
   s=m+2;
   if(m<n)
     s=n+2;
   k=s;
   c[s]='\0';
   s--;
   while(s)
   {
   	 if(a[n]>='0'&&b[m]>='0'&&a[n]<='9'&&b[m]<='9')
   	    c[s]=a[m]+b[n]-'0'-'0';
   	 else if(a[n]>='a'&&b[m]>='a'&&a[n]<='j'&&b[m]<='j')
   	    c[s]=a[m]+b[n]-'a'-'a'+20;
   	 else    c[s]=a[m]+b[n]-'a'-'0'+10;
   	 s--;
   	 n--;
   	 m--;
   }
   c[0]=0;
   for(i=k-1;i;i--)
   {
   	 s1: ;
   	 if(c[i]<=9) c[i]+='0';
     else if(c[i]>9&&c[i]<20)
       c[i]+='a'-10;
     else { c[i]-=20; c[i-1]++;goto s1;}
   }
   if(!c[0]) c[0]='1';
}

main()
{
    char a[100],b[100],c[101];
    int n,m;
    while(scanf("%s%s",a,b)!=EOF)
    {
    	n=strlen(a);
  	    m=strlen(b);
    	f(a,n-1,b,m-1,c);
    	if(c[0]=='0') n=2;
    	else n=1;
    	for(;c[n];n++)
    	 printf("%c",c[n]);
    	printf("\n");
    }	
}


