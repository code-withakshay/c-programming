#include<iostream>
#include<conio.h>
using namespace std;
class student{
   string id[10];
   int rno[10];
   string name[20];
   double m1,m2,m3;
   double avg;
   
   public:
   	
   	//5void read_data();
   	void compute();
   	void display();
   
	
};
void student::compute()
{
	avg=(m1+m2+m3)/3;
}
void student::display()
{
	cout<<"\n__________________________________________________________________________________\n";
	cout<<name<<"Datails \n";
	cout<<"\n___________________________________________________________________________________\n";
	cout<<"Roll no is "<<rno;
	cout<<"\n Name is "<<name;
	cout<<"\n Marks1 is "<<m1;
	cout<<"\n Marks2 is "<<m2;
	cout<<"\n Marks3 is "<<m3;
	cout<<"\n Average Marks of Three Subjects in "<<avg;
	cout<<"\n __________________________________________________________________________________\n";
}
int main()
{
	student s[10];
	int n,i;
	cout<<"\n Enter the number of Student : ";
	cin>>n;
	for(i=0;i<n;i++)
	//s[i].read_data();
	for(i=0;i<n;i++)
	s[i].compute();
	for(i=0;i<n;i++)
	s[i].display();
    return 0;
}

