//Find Duplicate Elements in an Array in c..

#include<stdio.h>

int main(){
	
	int i, j, n;
	
	printf("Enter How Many Elements You Want to Insert :");
	scanf("%d",&n);
	printf("Insert %d Elements :\n",n);
	int arr[n];
	
	
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
printf("Duplicate value is :\n ");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
			printf("%d ",arr[j]);	
			}
			
		}
	}
			
}
