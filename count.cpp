#include<stdio.h>
int main(){
	int a[]={1,2,3,2,5,2,4,2,6,9};
	int i,count=0;
	for(i=0;a[i]<=10;i++){
		if(a[i]==2){
			count++;
			continue;
			
		}
		else{
			printf("%d,",a[i]);
		}
	}
	printf("\n Repeat Number: %d",count);
	printf("\n For Loop exit...!");
	return 0;
}
