#include<stdio.h>
main()
{
  char c;
  long t;
  int k;
  while(scanf("%c",&c)&&c>'0'&&c<='2')
  {
   t=c-'0';
   k=c-'0';
   while(1)
   {
    c=getchar();
    if(c>='0'&&c<='2')
    {
      t=t*2+c-'0';
      k=k+c-'0';
    }
    else if(c=='\n')  break;
    else exit(-1);
   }
   t=t*2-k;
   printf("%ld\n",t);
  }
}
