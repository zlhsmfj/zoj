#include<stdio.h>
#define pi 3.14159265358979626

main()
{
 float x,y,f;
 int i,n,z;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%f%f",&x,&y);
   for(z=1;;z++)
   {
    f=x*x+y*y;
    if(z*100/pi>f) break;
   }
   printf("Property %d: This property will begin eroding in year %d.\n",i+1,z);
 }
 printf("END OF OUTPUT.\n");
}
