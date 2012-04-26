#include<stdio.h>
main()
{
  int C,N,a[1000],i,j,n,d=0;
  long t;
  float m;

  scanf("%d",&C);
  for(i=0;i<C;i++){
     scanf("%d",&N);
     if(N>=1&&N<=1000){
	n=0;
	t=0;
	for(j=0;j<N;j++){
	  scanf("%d",&a[j]);
	  if(a[j]>=0&&a[j]<=100)
	    t=t+a[j];
	  else {d=1;break;}
	}
	if(d) break;
	else{
	  m=t/N;
	  for(j=0;j<N;j++)
	    if(a[j]>m) n++;
	  m=(float)n/N*100;
	  printf("%.3f%\n",m);
	} }

     else break;
  }
}