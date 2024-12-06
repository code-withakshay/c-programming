#include<iostream>
using namespace std;
int main()
{
	int i,j, n;
	cout<<"Enter the star pattern";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		cout<<"*";
		
	}
	return 0;
}
