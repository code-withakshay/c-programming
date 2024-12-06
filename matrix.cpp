#include<iostream>
using namespace std;

int main()
{
	int rows=2, columns=2;
	int i,j;
	int matrixA[rows][columns];
	int matrixB[rows][columns];
	int sum[rows][columns];
	
	cout<<"Enter elements of 1st Matrix: "<<endl;
	for(i=0; i<rows; ++i)
	{
		for(j=0; j<columns; ++j)
		{
			cout<<"Enter element a"<<i+1<<j+1<<" : ";
			cin>>matrixA[i][j];
		}
	}
	
	cout<<endl<<"Enter elements of 2nd Matrix: "<<endl;
	for(i=0; i<rows; ++i)
	{
		for(j=0; j<columns; ++j)
		{
			cout<<"Enter element b"<<i+1<<j+1<<" : ";	
			cin>>matrixB[i][j];
		}	
	}
	
	cout<<endl<<"Sum of 2 Matrix is: "<<endl;	
	for(i=0; i<rows; ++i)
	{
		for(j=0; j<columns; ++j)
		{
			sum[i][j]=matrixA[i][j]+matrixB[i][j];
			cout<<sum[i][j]<<"\t";
			
			if(j==columns-1)
			cout<<endl;
		}
	}
	return 0;
}
