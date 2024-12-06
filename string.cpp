#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char s1[20];
	int len;
	printf("\n Enter any string : ");
	scanf("%s",&s1);
	//gets(s1);
	len=strlen(s1);
	printf("\n Length of string: %d",len);
	getch();
}
