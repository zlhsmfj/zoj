#include<stdio.h>
main()
{
  float s,w,t;
  int i,j,k;
  while(scanf("%f%f%f",&s,&w,&t)&&s>0&&t>0&&w>0)
  {
   i=j=k=0;
   if(s<=4.5&&w>=150&&t>=200)
     i++;
   if(s<=6.0&&w>=300&&t>=500)
     j++;
   if(s<=5.0&&w>=200&&t>=300)
     k++;
   if(i){
     printf("Wide Receiver");
     if(j)
       printf(" Lineman");
     if(k)
       printf(" Quarterback");
   }
   else if(j){
     printf("Lineman");
     if(k) printf(" Quarterback");
   }
   else if(k)
     printf("Quarterback");
   else printf("No positions");
   printf("\n");
 }
}
