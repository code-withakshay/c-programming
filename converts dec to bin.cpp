#include<stdio.h>
 int binary(int num);
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Decimal=%d\n,Binary=%ld\n",num,binary(num));
	return 0;
}
 int binary(int num)
{
	long a=1,bin=0,rem;
	while(num>0)
	{
		rem=num%2;
		bin=bin+rem*a;
		num/=2;
		a*=10;
	}
	return bin;
}
