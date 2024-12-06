#include<iostream>
using namespace std;

int main()
{
	int i=4;
	int j=8;
	int temp=0;
	cout<<"Before swap :"<<i<<endl;
	cout<<"Before swap :"<<j<<endl;
	temp=i;
	i=j;
	j=temp;
	cout<<"---------------------***---------------------"<<endl;
	cout<<"After swap :"<<i<<endl;
	cout<<"After swap :"<<j<<endl;
	return 0;
}
