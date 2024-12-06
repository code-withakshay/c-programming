#include<stdio.h>
#include<conio.h>
int main()
{
	struct date
	{
		unsigned int dd:5;
		unsigned int mm:4;
		unsigned int yy:7;
	};
	struct date d={26,5,2008};
	
	printf("\n date=%d/%d/%d\n",d.dd,d.mm,d.yy);
}

