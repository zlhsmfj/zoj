/* Note:Your choice is C IDE */
#include "stdio.h"
main()
{
   int m,d,n,i,j,x,y,z;
   long t;
   scanf("%d",&m);
   while (m--)
   { d=0;
     scanf("%d%d%d%d",&n,&x,&y,&z);
     x=x*1000+y*100+z*10;
     for(i=9;i>=1;i--)
     {
      for(j=9;j>=0;j--)
      {
      	 t=(long)i*10000+x+j;
         if(t%n==0) { d=1;printf("%d %d %d\n",i,j,t/n);break;}
      }
      if(d) break;
     }
      if(!d) printf("0\n");
   }   
}
