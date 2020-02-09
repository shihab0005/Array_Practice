//Program to find the frequency of each element in the array..

#include<stdio.h>

int main(){
	
	int i,j,count,n,visited =-1;
	printf("Enter The number Of Elements to find the frequency of each element :");
	scanf("%d",&n);
	printf("Enter %d elements .\n",n);
	int a[n];
	int freq[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		freq[i]=-1;
	}
	
	for(i=0;i<n;i++){
		count=1;
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				count++;
				freq[j] =0;
			}
		}
		if(freq[i] != 0) {
			freq[i] = count; 
		} 
             
	}
	printf("-----");
	printf("Element | Frequency");
	printf("------\n");
	for(i=0;i<n;i++){
		if(freq[i] !=0){
			printf("%d  | %d \n",a[i],freq[i]);
		}
		printf("\n");
	}
}
