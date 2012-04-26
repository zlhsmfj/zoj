#include<stdio.h>
main()
{
  int n,m,i,j,d[1000];
  char a[1000][11],b[1000][11];
  while(scanf("%d",&n)&&n>0&&n<=1000)
  {
     m=0;
     for(i=0;i<n;i++)
     {
       d[i]=0;
       scanf("%s%s",a[i],b[i]);
       for(j=0;b[i][j]!='\0';j++)
       {
	if(b[i][j]=='1') {b[i][j]='@'; d[i]=1;}
	if(b[i][j]=='l') {b[i][j]='L'; d[i]=1;}
	if(b[i][j]=='0') {b[i][j]='%'; d[i]=1;}
	if(b[i][j]=='O') {b[i][j]='o'; d[i]=1;}
	if(j>=10)  return 0;
       }
       if(d[i]) m++;
     }
     if(m) {
       printf("%d\n",m);
       for(i=0;i<n;i++)
	if(d[i])
	printf("%s %s\n",a[i],b[i]);
       }
     else printf("No account is modified.\n");
  }
}