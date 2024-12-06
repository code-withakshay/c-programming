#include<stdio.h>
int main()
{
	int num;
	printf("Enetr the number: ");
	scanf("%d",&num);
	int max=0,rem,rev=0;
	while(num>0)
	{
		rem=num%10;
		
		if(rem>max)
		{
			max=rem;
		}
		num=num/10;
	}
	printf("maxm value=%d",max);
	
}
