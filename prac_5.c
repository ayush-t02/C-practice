#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,d,z;
	float e;
	printf("Enter 2 integers = ");
	scanf("%d %d",&a,&b);
	do
	{
		printf("\nMenu:\n1-Addition\n2-Substraction\n3-Multiplication\n4-Division\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				{
					d = a + b;
					printf("Addition = %d",d);
					break;
				}
			case 2:
			    {
			        d = a - b;
					printf("Substraction = %d",d);
					break;
				}
			case 3:
				{
					d = a * b;
					printf("Multiplication = %d",d);
					break;
				}	
			case 4:
				{
					d = a / b;
					printf("Division = %d",d);
					break;
				}
			default:
	            {
					printf("\nInvalid Choice");
					break;
				}		
		}
        printf("\nPress 1 to continue!");
		scanf("%d",&z);		
	}
	while(z==1);
	return 0;
}
