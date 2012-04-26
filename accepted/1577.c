#include<stdio.h>

main()
{
  long x,y,i,t,ans;
  int m=0;
  
  /*
freopen("in.txt","r",stdin);
  freopen("out.txt","w",stdout);*/
  
  while(scanf("%ld%ld",&x,&y)!=EOF)
    if(y%x!=0){ printf("0\n");continue;}
    else
    {
      m=0;
      t=y/x;
      for(i=2;i<=t;i++)
      	{
			if(t%i==0)
				m++;
			while(t%i==0)
				t=t/i;
			if(t==1)
				break;
		}
		ans=1;
		for(i=1;i<=m;i++)
			ans*=2;
	   printf("%ld\n",ans);
    }
}
