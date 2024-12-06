#include<iostream>
using namespace std;
int main()
{
	int n;
	int i;
	cout<<"Enter the number of elements :";
	cin>>n;
	
	int *arr=new int[n];
	
	cout<<"Enetr  "<<n<<"  Numbers:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	int largest=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
	}
	cout<<"The Largest Number is: "<<largest<<endl;
	
	//delete[] arr;
	
	return 0;
	
}
