//Maximum and Minimum of Array........

#include<stdio.h>

int main(){
	
	int n,i,max , min;
	
	printf("How many number Do you Want To Insert :");
	scanf("%d",&n);
	int num[n];
	
	printf("Please Insert %d number :",n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	
	max=num[0];
	for(i=1;i<n;i++){
		if(max<num[i]){
			max =num[i];
		}
	}
	printf("Maximum value is :%d",max);
	
	min=num[0];
	for(i=1;i<n;i++){
		if(min>num[i]){
			min =num[i];
		}
	}
	printf("\nMinimum value is :%d",min);
}
