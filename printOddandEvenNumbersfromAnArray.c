//print Odd and Even Numbers from an Array

#include<stdio.h>

int main(){
	int a[10], i;
	
	printf("Enter 10 number to print Odd and Even Number :");
	for(i=0; i<=9; i++){
		scanf("%d",&a[i]);
	}
	printf("\n Print Even Number From Given Number :");
	for(i=0; i<=9; i++){
		if(a[i]%2==0){
			printf("%d ",a[i]);
		}
	}
	printf("\n Print Odd Number From Given Number :");
	for(i=0; i<=9; i++){
		if(a[i]%2!=0){
			printf("%d ",a[i]);
		}
	}
}
