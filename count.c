#include<stdio.h>
int countdigit(int n)
{
	if(n==0)
	return 1;
	int count=0;
	while (n!=0)
	{
    n=n/10;
    ++count;
} 
return count;
}      
        int main()
        {
        	int n=345;
        	printf("number of digit:%d count digit \n",countdigit(n));
        	return 0;
		}
