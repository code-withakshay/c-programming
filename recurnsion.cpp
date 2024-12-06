#include<stdio.h>
int sum(int a){
	int s;
	if(a==1)
	return a;
	s=a+sum(a-1);
	return s;
	
}

int main(){
	int x=3;
	printf(" Before: %d\n",x);
	x=sum(x);
	printf("%d",x);
	return 0;
}
