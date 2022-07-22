/******** C program to print the below pattern

 e
 d e
 c d e 
 b c d e 
 a b c d e

 ***************/

#include<stdio.h>

int main()
{
	int i,j,num,k=1;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=num;i>=1;i--)
	{
		for(j=num;j>=i;j--)
		{
				printf("%c ",96+j);
		}
		printf("\n");
	}
	return 0;
}

