#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter a value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		
		for(j=1;j<=n-1;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		printf("%d",j);
		printf(" ");
		for(j=i-1;j>=1;j--)
		printf("%d",j);
		printf(" ");
	}
}