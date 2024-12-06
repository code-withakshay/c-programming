#include<iostream>
using namespace std;

int main()
{
	int i,n,t1=0,t2=1,next_tream=0;
	
	cout<<"Enetr the Number of Tream: ";
	cin>>n;
	
	cout<<"fibonacci series...."<<endl;
	for(i=0;i<=n;++i){
		
		cout<<t1<<", ";
		next_tream=t1+t2;
		t1=t2;
		t2=next_tream;
	}
	return 0;
}
