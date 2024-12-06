#include<stdio.h>
int main(){
	int i,count=0;
	int arr[]={1,2,3,2,4,2,5,6,2,7};
	
	for(i=0;arr[i]<10;i++)
	{
		//printf("%d,",arr[i]);
		if(arr[i]==2)
		{
			count++;
			continue;
		}
		printf("%d",count);
	}
	//printf("%d",count);
	return 0;
}
