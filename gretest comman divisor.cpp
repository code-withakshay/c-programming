#include<iostream>
using namespace std;

int main(){
	int i,n1,n2,gcd,temp;
	cout<<"Enter Two Number: ";
	cin>>n1>>n2;
	
	if(n2>n1)
	{
		temp=n2;
		n2=n1;
		n1=temp;
	}
	cout<<"After Swapping Two Number: "<<n1<<"  "<<n2<<endl;
	
	for(i=1;i<=n2;++i)
	{
		if(n1%i==0&&n2%i==0)
		{
			gcd=i;
		}
	}
	
	cout<<"GCD="<<gcd;
	return 0;`
}
