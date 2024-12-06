#include<iostream>
using namespace std;
class ven{
	public:
		int model_number;
		string car_name;
		float mailage;
		display();
		ven()
		{
			cout<<"Enter the car model number"<<endl;
			cin>>model_number;
			cout<<"Enter the car name"<<endl;
			cin>>car_name;
			cout<<"Enter the car engieen mailage"<<endl;
			cin>>mailage;
			
		}
};
class car:public ven{
	 car()
	 {
	 	display()
	 	{
	 		cout<<"CAR DETAILS !"<<endl;
	 		cout<<model_number<<endl;
	 		cout<<car_name<<endl;
	 		cout<<mailage<<endl;
		 }
	 }
};
int main()
{
	ven v;
	car c;
	return 0;
}
