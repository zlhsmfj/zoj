#include<stdio.h>

int a[1000000];

main()
{
  long int m,k,i;
  int t;
  
  freopen("out.txt","w",stdout);
  for(i=1;i<=1000000;i++)
    a[i]=0;
  for(i=1;i<=1000000;i++)
  {
  	m=i;
  	k=i;
  	while(m){
  	  t=m%10;
      k=k+t;
      m/=10;
  	}
  	if(k<=1000000) a[k]=1;
  }
  for(i=1;i<=1000000;i++)
    if(a[i]==0) printf("%ld\n",i);
}
