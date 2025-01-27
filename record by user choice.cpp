#include<stdio.h>
#include<conio.h>
#define N 5
struct date
{
	int day;
	int month;
	int year;
	
};
struct employee
{
	char name[20];
	struct date dob;
	struct date doj;
	int salary;
};
void sort_name(struct employee emp[]);
void sort_dob(struct employee emp[]);
void sort_doj(struct employee emp[]);
void sort_salary(struct employee emp[]);
void display(struct employee emp[]);
int datecmp(struct date date1,struct date date2);
int main(void)
{
	struct employee emp[N];
	int i,choice;
	for(i=0;i<N;i++)
	{
		printf("Enter Name:");
		scanf("%s",emp[i].name);
		printf("Enter date of birth(dd/mm/yy): ");
		scanf("%d/%d/%d",&emp[i].dob.day,&emp[i].dob.month,&emp[i].dob.year);
		printf("Enter date of joining(dd/mm/yy): ");
		scanf("%d/%d/%d",&emp[i].doj.day,&emp[i].doj.month,&emp[i].doj.year);
		printf("Enter salary: ");
		scanf("%d",&emp[i].salary);
		printf("\n");
	}
	while(1)
	{
		printf("1.sort by name\n");
		printf("2.sort by date of birth\n");
		printf("3.sort by date of joining\n");
		printf("4.sort by salaey\n");
		printf("5.Exit\n");
		printf("6.Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case1:
				sort_name(emp);
				break;
			case2:
				sort_dob(emp);
				break;
			case3:
				sort_doj(emp);
				break;
			case4:
				sort_salary(emp);
				break;
			case5:
				Exit(1);
			default:
				printf("Wrong choice\n");
				
		}
		printf("\n");
		display(emp);
	}
	return 0;
}
void display(struct employee emp[])
{
	int i;
	printf("NAME\t\tDOB\t\tDOJ\t\tSALARY\n");
	for(i=0;i<N;i++)
	{
		printf("%s\t\t",emp[i].name);
		printf("%d/%d/%d\t\t",emp[i].dob.day, emp[i].dob.month, emp[i].dob.year);
		printf("%d/%d/%d\t\t",emp[i].doj.day, emp[i].doj.month, emp[i].doj.year);
		printf("%d\n",emp[i].salary);
	}	
	printf("\n");
}
void sort_name(struct employee emp[])
{
	struct employee temp;
	int i,j;
	for(i=0; i<N-1; i++)
	for(j=i+1; j<N; j++)
		if(strcmp(emp[i].name,emp[j].name)>0)
		{
			temp=emp[i];
			emp[i]=emp[j];
			emp[j]=temp;
		}
}
void sort_dob(struct employee emp[])
{
	struct employee temp;
	int i,j;
	for(i=0; i<N-1; i++)
	for(j=i+1; j<N; j++)
		if(datecmp(emp[i].dob,emp[j].dob)>0)
		{
			temp=emp[i];
			emp[i]=emp[j];
			emp[j]=temp;
		}	
}
void sort_doj(struct employee emp[])
{
	struct employee temp;
	int i,j;
	for(i=0; i<N-1; i++)
	for(j=i+1; j<N; j++)
		if(datecmp(emp[i].doj,emp[j].doj)>0)
		{
			temp=emp[i];
			emp[i]=emp[j];
			emp[j]=temp;
		}
}
void sort_salary(struct employee emp[])
{
	struct employee temp;
	int i,j;
	for(i=0; i<N-1; i++)
	for(j=i+1; j<N; j++)
		if(datecmp(emp[i].salary,emp[j].salary)>0)
		{
			temp=emp[i];
			emp[i]=emp[j];
			emp[j]=temp;
		}
}
int datecmp(struct date date1,struct date date2)
{
	if(date1.year<date2.year)
			return 1;
	if(date1.year>date2.year)
			return -1;
	if(date1.month<date2.month)
			return 1;
	if(date1.month>date2.month)
			return -1;
	if(date1.day<date2.day)
			return 1;
	if(date1.day>date2.day)
			return -1;
	return 0;
}
