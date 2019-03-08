#include <stdio.h>

int main()
{
   int x,y,z;
   printf("enter the three numbers:");
   scanf("%d%d%d",&x,&y,&z);
   if(x>y && x>z)
   {
      printf("%d is greatest number",x);
   }
   if(y>z && y>x)
   {
       printf("%d is greatest number",y);
   }
    if(z>x && z>y)
   {
       printf("%d is greatest number",z);
   }
