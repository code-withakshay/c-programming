#include<iostream>
using namespace std;

class emplyee{
	public:
		int id;
		double salary;
		string name;
		void set_detail(int x,string y,double z)
		{
			id=x;
		    name=y;
			salary=z;
			
		}
		void get_detail()
		{
			cout<<"\n\n\t Emplyee Name: "<<name<<endl;
			cout<<"\n\n\t Emplyee ID: "<<id<<endl;
			cout<<"\n\n\t Emplyee Salary: \n"<<salary<<endl;
			cout<<"\t\t\ *********** THANK YOU FOR VISIT EMPLYEE RECORD **********"<<endl;
		}
};
int main()
{
	emplyee emp;
	emp.set_detail(11002,"Akshay",760000);
	emp.get_detail();
    return 0;
}
