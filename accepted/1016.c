/* Note:Your choice is C IDE */
#include "stdio.h"
main()
{
   int n,s,i,j,k,m,p,q,a[50];
   scanf("%d",&n);
   for(;n>0;n--)
   {
   	  scanf("%d%d",&s,&p);
   	  for(i=0;i<50;i++)
   	    a[i]=0;
   	  a[p]=1;
   	  if(s==1) printf("1\n");
   	  else printf("1 ");
   	  for(i=1;i<s;i++)
   	  {
   	  	 scanf("%d",&q);
   	     a[q+i]=1;
   	     m=0;
   	     k=0;
   	     for(j=q+i-1;j>=0;j--)
   	     {
   	       if(a[j]==0) {m++;k++;} 
   	       else m--;
   	       if(m==1){
   	       	 if(i==s-1) printf("%d\n",k);
   	       	 else       printf("%d ",k);
   	       	 break;
   	       }
   	     }
   	     
   	  }
   }
}  
   	  

