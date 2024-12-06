#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char st[80],dw[20],wd[20];
	int i,j,k,id=0,ck=0;
	printf("enter a string \n");
	gets(st);
	printf("enter a word to delete:\n");
	gets(dw);
	for(i=0;i<=strlen(st);i++)
	{
		if(st[i]==32||st[i]=='\0')
		{
			wd[id]='\0';
			if(strcmp(dw,wd)==0)
			{
				ck=1;
				if(st[i]=='\0')
				st[i-strlen(wd)]='\0';
				else
				{
					for(j=i-strlen(wd),k=i+1;st[k]!='\0';j++,k++)
					{
						st[j]=st[k];
					}
					st[j]='\0';
				}
			}
			else
			{
				id=0;
			}
		}
		else
		{
			wd[id]=st[i];
			id++;
		}
	}
	if(ck==0)
	printf("word not found");
	else
	printf("given string after deletion :%s",st);
	getch();
	
}

