#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class student
{
	int rollno;
	char name[50];
	int eng_marks,math_marks,sci_marks,lang2_marks,cs_marks;
	double average;
	char grade;
	
	public:
		void getdata();
		void showdata() const;
		void calculate();
		int retrollno() const;		
};
void student::calculate()
{
	average=(eng_marks+math_marks+sci_marks+lang2_marks+cs_marks)/5.0;
	if(average>=90)
	grade='A';
	else if(average>=75)
	grade='B';
	else if (average>=50)
	grade='C';
	else
	grade='F';
}
void student::getdata()
{
	cout<<"\n Enter students roll number :";
	cin>>rollno;
	cout<<"\n Enter the student name :";
	cin.ignore();
	cin.getline(name,50);
	cout<<"\n All marks should be out of 100 ";
	cout<<"\n Enter marks in English :";
	cin>>eng_marks;
	cout<<"\n Enter marks in math :";
	cin>>math_marks;
	cout<<"\n Enter marks in scince :";
	cin>>sci_marks;
	cout<<"\n Enter marks in 2nd language :";
	cin>>lang2_marks;
	cout<<"\n Enter marks in computer scince:";
	cin>>cs_marks;
	calculate();
	
}
void student::showdata()const
{
	cout<<"\n Roll number of student :"<<rollno;
	cout<<"\n  name of student : "<<name;
	cout<<"\n English :"<<eng_marks;
	cout<<"\n Math :"<<math_marks;
	cout<<"\n Scince :"<<sci_marks;
	cout<<"\n Language :"<<lang2_marks;
	cout<<"\n Computer scince :"<<cs_marks;
	cout<<"\n Average :"<<average;
	cout<<"\n Grade of student is :"<<grade;
	
}
int student::retrollno()const
{
	return rollno;
}
void create_student();
void display_sp(int);
void display_all();
void delete_student(int);
void change_student(int);

int main()
{
	char ch;
	cout<<setprecision(2);
	do
	{
		char ch;
	    int num;
		system("cls");
		cout<<"\n\n\n\t MENU";
		cout<<"\n\n\n\t1.Create student record";
		cout<<"\n\n\n\t2.Search student record";
		cout<<"\n\n\n\t3.Display all  student record";
		cout<<"\n\n\n\t4.Delete student record";
		cout<<"\n\n\n\t5.Modifiy student record";
		cout<<"\n \n\n\t6.Eixt";
		cout<<"\n\n What is your choice(1/2/3/4/5/6)";
		cin>>ch;
		system("cls");
		switch(ch)
		{
			case '1':create_student(); break;
			case '2':cout<<"\n\n\t Enter the roll number :";
			cin>>num;
			display_sp(num);break;
			case'3':display_all();break;
			case'4':cout<<"\n\n\tEnter the roll number :";
			cin>>num;
			delete_student(num);break;
			case '5':cout<<"\n\n\tEnter the roll number :";
			cin>>num;
			change_student(num);break;
			case '6':cout<<"Exiting, Thank You!";exit(0);
		}
	}
while(ch!='6');
return 0;
}

void crate_student()
{
	student stud;
	ofstream oFile;
	oFile.open("Student.dat",ios::binary|ios::app
	stud.getdata();
	oFile.write(reinterpret_cast<char(&stud),sizeof(student));
	oFile.close();
	cout<<"\n\n Student record Has Been Created";
	cin.ignore();
	cin.get();
	
}
void display_all()
{
	student stud;
	ifstream inFile;
	inFile.open("student.dat",ios::binary
	if(!inFile)
	{
		cot<<"File could not be opened !! Press any keyto Exit";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\n\t\t DISPLAYING ALLRECORDS\n\n";
	while(inFile.read(reinterpret_cast<char (&stud),sizeof(student)))
	{
		st.showdata();
		cout<<"\n\n=======================================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
}
void display_sp(int n)
{
	stdent stud;
	ifstream iFile;
	iFile.open("student.dat",ios::binary)0
	if(!iFile)
	{
		cout<<"File could not be opened... Press any key to eixt";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(iFile.read(reinterpret_cast<char (&stud), sizeof(student)))
	{
		if(stud.retrollno()==n)
		{
			stud.showdata();
			flag=true;
		}
	}
	iFile.close()
	if(flag==false)
	cout<<"\n\n record dose not exits";
	cin.ignore();
	cin.get();
}
void change_student(int n)
{
	bool found=false;
	studentstud;
	fstream f1;
	f1.open("stdent.dat",ios::binary|ios::Init|ios::out
	if(!f1)
	{
		cout<<"file could not be opend... Press any key to eixt...";
		cin.ignore();
		cin.get();
		return;
	}
	while(!f1.eof()&& found==false)
	{
		f1.read(reinterpret_cast<char(&stud),sizeof(student));
		if(stud.retrollno()==n)
		{
			stud.showdata();
			cout<<"\nEnter new student details:"<<endl;
			stud.getdata();
			int pos=(-1)*static_cast<int>(sizeof(stud));
			f1.seekp(pos,ios::cur);
			f1.write(reinterpret_cast<char*>(&stud),sizeof(student));
			cout<<"\n\n\t Record updated";
			found=true;
		}
	}
	File.close();
	if(found==false)
	cout<<"\n\n Record not found";
	cin.ignore();
	cin.get();
}
void delete_student(int n)
{
	student stud;
	ifstream iFile;
	iFile.open("student.dat",ios::binary
	if(!iFile)
	{
		cout<<"File could not be opened...Press any key to exit...";
		cin.ignore();
		cin.get();
		return;
	}
	ofstream oFile;
	oFile.open("Temp.dat",ios::out iFile.seekg(0,ios::beg);
	while(iFile.read(reinterpret_cast<char(&stud),sizeof(student)))
	{
		if(stud.retrollno()!=n)
		{
			oFile.write(reinterpret_cast<char*>(&stud),sizeof(student));
		}
	}
	oFile.close();
	iFile.close();
	remove("student.dat");
	rename("Temp.dat","student.dat");
	cout<<"\n\n\t Record Deleted...";
	cin.ignore();
	cin.get();
}
