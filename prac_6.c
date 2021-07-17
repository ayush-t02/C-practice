#include<stdio.h>

int main()
{
   int a=1,b=1,c=0,l,i;
   printf("Enter the length of series\n");
   scanf("%d",&l);
   printf("%d  ",a); 
   printf("  %d  ",b);
   for(i=1;i<=l-2;i++)
   {
      c =  a + b;
      a = b;
      b = c; 
      printf("  %d  ",c);
   }
}
