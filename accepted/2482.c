#include<stdio.h>
main()
{
  int N;
  long t,i,j;
  char c;
  scanf("%d\n",&N);
  for(i=0;i<N;i++)
    for(t=0,j=1;j<33;j++)
    {
       scanf("%c",&c);

       if(c=='\n') {j--;continue;}
       else if(c>'1'||c<'0')  return 0;
       t=c-'0'+t*2;
       if(j%8==0){
	 if(j<32)printf("%ld.",t);
	 else printf("%ld\n",t);
	 t=0;
       }
    }
}
