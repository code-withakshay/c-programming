#include<stdio.h>
#include<string.h>
struct student{
	char name[20];
	int roll_no;
	float marks;
};
int main()
{
	struct student stu1 ={"Akshay kumar",29,92};
	struct student stu2,stu3;
	strcpy (stu2.name,"Mukesh kumar");
	stu2.roll_no=26;
	stu2.marks=88;
	printf("Enter name , Roll No , and  Marks for stu3 :");
	scanf("%s %d %f",stu3.name, &stu3.roll_no, &stu3.marks);
	printf("stu1 : %s %d %f\n",stu1.name, stu1.roll_no, stu1.marks);
	printf("stu2 : %s %d %f\n",stu2.name, stu2.roll_no, stu2.marks);
	printf("stu3 : %s %d %f\n",stu3.name, stu3.roll_no, stu3.marks);
	return 0;
}
