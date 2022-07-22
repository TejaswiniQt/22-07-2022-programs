/******** C program to print the below pattern

 a
 b a
 c b a 
 d c b a 
 e d c b a

 ***************/

#include<stdio.h>

int main()
{
	int i,j,num,k=1;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=i;j>=1;j--)
		{
				printf("%c ",96+j);
		}
		printf("\n");
	}
	return 0;
}

