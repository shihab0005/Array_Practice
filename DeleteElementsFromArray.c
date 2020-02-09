//How to Delete An Element From An Array 

#include<stdio.h>
int main(){
	
	int i, j, n,del;
	
	printf("Enter How Many Elements You Want to Insert :");
	scanf("%d",&n);
	printf("Insert %d Elements :\n",n);
	int arr[n];
	
	
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter Elements To Delete :");
	scanf("%d",&del);
	
	for(i=0;i<n;i++){
		if(del ==arr[i]){
			for(j=i;j<n;j++){
				arr[j]=arr[j+1];
			}
			break;
		}
	}
	printf("After Delete :\n");
	for(i=0;i<n-1;i++){
		printf("%d  ",arr[i]);
	}
}
