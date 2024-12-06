#include<iostream>
using namespace std;

int* tan_data(int *data)
{
	for(int i=0;i<5;++i)
	{
		*(data+i)=*(data+i)+10;
	}
	return data;
}
int main()
{
	int data[5]={1,2,3,4,5};
	cout<<"Change the element(before) :";
	for(int i=0;i<5;++i){
		cout<<data[i]<<",";
	}
	cout<<endl;
	int *result;
	result=tan_data(data);
	cout<<"Change the element(after) :";
	
	for(int i=0;i<5;++i){
		cout<<*(result+i)<<",";
	}
	return 0;
}
