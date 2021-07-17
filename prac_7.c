#include<stdio.h>

int main()
{
    int i,j,n,s=0;
    printf("\nEnter the no. of lines: ");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
       for(j=n;j>=s;j--)
	   {
	   	  printf(" ");
	   }  
	   for(j=1;j<=i;j++)
	   {
	   	  if(j%2==0)
	   	  {
	   	  	printf("2");
		  }
		  else
		  {
		  	printf("1");
		  }
	   }
	    for(j=1;j<i;j++)
	   {
	   	 if(i%2==0)
	   	 {
	   	 	if(j%2==0)
	   	  {
	   	  	printf("2");
		  }
		  else
		  {
		  	printf("1");
		  }
		 }
		 else
		 {
	   	   if(j%2==0)
	   	  {
	   	  	printf("1");
		  }
		  else
		  {
		  	printf("2");
		  }
	    }
	   }
	   printf("\n");
	   s++;
    }
    return 0;

}
