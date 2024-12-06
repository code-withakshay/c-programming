#include<stdio.h>
int sum(int *x){
	int y=5;
	*x=*x+y;
	printf("after calling the function %d\n",*x);
	
}
int main()
{
	int x=10;
	printf("Main Value X=%d\n",x);
	sum(&x);
	printf("Before calling the function %d\n",x);
	return 0;
}
