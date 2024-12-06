 #include<iostream>
 using namespace std;
 class student{
 	public:
 		int roll_number;
 		float marks[5];
 		string name;
 		student()
 		{
 			cout<<"Enter  the roll number:";
 			cin>>roll_number;
 			cout<<"Enter the subject by marks"<<endl;
 			for(int i=0;i<5;i++)
 			cin>>marks[i];
 			cout<<"Enter the student name:";
 			cin>>name;
		 }
		 void get_student_details()
		 {
		 	cout<<"student roll number"<<roll_number<<endl;
		 	for(int i=0;i<5;i++)
		 	cout<<"student subject marks"<<marks[i]<<endl;
		 	cout<<"student name"<<name<<endl;
		 }
 };
 int main()
 {
 	student std;
 	std.get_student_details();
 	return 0;
 }
