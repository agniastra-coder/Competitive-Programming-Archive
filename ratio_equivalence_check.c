#include<stdio.h>
int multiple_check(long long a,long long b,long long c,long long x,long long y,long long z)
{
   if (x*b==y*a && y*c==z*b && x*c==z*a)
   {
      return 1;
   }
   else {return 0;};
}
int main()
{
   int T,i;
   printf("Enter the number of Test Cases: ");
   scanf("%d",&T);
   long long a,b,c,x,y,z;
   for(i = 1;i<=T;i++)
   { 
      scanf("%lld",&a);
      scanf("%lld",&b);
      scanf("%lld",&c);
      scanf("%lld",&x);
      scanf("%lld",&y);
      scanf("%lld",&z);
      if (multiple_check(a,b,c,x,y,z)==1)
      {
         printf("true\n");
      } 
      else
      {
         printf("false\n");
      }
   }
}