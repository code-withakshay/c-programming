#include<iostream>
using namespace std;
 
 class student_detail
 {
 	protected:
 		int rno,sum=0,i,marks[5];
 		string student_name[20];
 	public:
 		void detail()
 		{
 			//cout<<"Enter The Student Name :"<<endl;
 			//for(i=0;i<20;i++)
 			//{
 			  //cin>>student_name[i];	
 			  //9cout<<"\n\n Student Name :"<<student_name[i]<<endl;
			//}

 			cout<<"Enter The Roll No. :"<<endl;
 			cin>>rno;
 			
 			cout<<"Enter The Marks of Five Subjects"<<endl;
 			
 			for(i=0;i<5;i++)
 			{
 				cin>>marks[i];
			}
			for(i=0;i<5;i++)
			{
				sum=sum+marks[i];
			}
		}
 };
 class sports_mark
 {
 	protected:
 		int s_marks;
 	public:
 		void get_mark()
 		{
 			cout<<"\n Enter The Sports Marks"<<endl;
 			cin>>s_marks;
		 }
 };
 class result:public student_detail,public sports_mark
 {
 	int tot,avg;
 	public:
 		void display()
		{
			tot=sum+s_marks;
 			avg=tot/6;
 		//	cout<<"\n\n Student Name :"<<student_name[i]<<endl;
 			cout<<"\n\n\t Roll No. :"<<rno<<"\n\t Total: "<<tot<<endl;
 			cout<<"\n\t Average Marks:"<<avg;
		}
 };
 
 int main()
 {
 	result obj;
 	
 	obj.detail();
 	obj.get_mark();
 	obj.display();
 }
