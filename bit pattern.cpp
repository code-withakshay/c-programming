#include<stdio.h>
using namespace std;
void displayBits(int x);
int count_setbits4(unsigned x);
int main()
{
	unsigned x=1124;
	displayBits(x);
	printf("%d",count_setbits4(x));
	return 0;
}
int table []={0,1,1,2,1,2,3,1,2,2,3,2,3,3,4};
int count_setbits4(unsigned x)
{
	int count =0;
	//int y=0;
	while(x!=0)
	{
		count=count+table[x&0xF]
		//y=y>>4;
	}
	return count;
}
