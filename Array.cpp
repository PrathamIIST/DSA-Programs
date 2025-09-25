//Array
#include<stdio.h>

int main(){
	int a[6]={20,40,60,45,10},i,search,flag=0,count=0;

	//Traverse
	printf("The elements of your array are: ");
	for(i=0; i<5; i++){
		printf("%d ",a[i]);
		count++;
	}
	printf("\n");
	
	//Insert
	int New,Newindex,temp;
	
	printf("Enter the element to be inserted: ");
	scanf("%d",&New);
	
	printf("Enter the index value of inserted element:");
	scanf("%d",&Newindex);

    for (i = count; i > Newindex; i--) {
        a[i] = a[i - 1];
	}
	
    a[Newindex] = New;
    count++;
	
	printf("Array after insertion operation: ");
	for(i=0; i<count; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	
	
	//Linear Search
	printf("\n\nEnter the element you want to search: ");
	scanf("%d",&search);
	
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
	flag=0;
	printf("\nArray before sorting: ");
	
	for(i=0; i<=4; i++){
		printf("%d ",a[i]);
	}
	
	
	printf("\nArray after sorting: ");
	for(i=0; i<=4; i++){
		printf("%d ",a[i]);
	}
	
	
}
