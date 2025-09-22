//Array 
#include<stdio.h>

int main(){
	int a[5]={20,40,60,45,10},i,search,flag=0;

	printf("Enter the element you want to search: ");
	scanf("%d",&search);
	
	
	
	//Linear Search
	for(i=0; i<=4; i++){
		if(a[i]==search){
			printf("Element is found at %d position.",i+1);
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("Element not found in the array.");
		
	//Binary Search
	
	printf("\nArray before sorting: ");
	
	
	int min=a[0];
	int max=a[0];
	
	for(i=0; i<=4; i++){
		if(min>=a[i]){
			min=a[i];
		}
	}
	int j;
	for(i=0; i<=4; i++){
		if(max<=a[i]){
			max=a[i];
			j=i;
		}
	}
	
	int temp=a[0];
	a[0]=min;
	a[1]=temp;
	
	temp=a[4];
	a[4]=max;
	a[j]=temp;
	
	for(i=0; i<=4; i++){
		printf("%d ",a[i]);
	}
	
	
	for(i=1; i<5; i++){
		if(a[i]>a[i+1]){
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	
	
	printf("\nArray after sorting: ");
	for(i=0; i<=4; i++){
		printf("%d ",a[i]);
	}
	
	
}
