//sum of pos and neg value of an array..


//missing value in array....

#include<stdio.h>

void main()
{
int  n,i,sum_neg=0,sum_pos=0 ,total=0;
 
 printf("Enter How Many value You Insert In Array :");
 scanf("%d",&n);
 int arr[n];
 printf("Enter %d (positive & negative )value :\n",n);
 
 for(i=0;i<n;i++){
 	scanf("%d",&arr[i]);
 }
 printf("Your given Value Is :\n");
 for(i=0;i<n;i++){
 	printf("\n%d",arr[i]);
 }
 for(i=0;i<n;i++){
 	if(arr[i]<0){
 		sum_neg =sum_neg+arr[i];
	 }
	 else if(arr[i]>0){
	 	sum_pos =sum_pos+arr[i];
	 }
	 else if(arr[i]==0){
	 	;
	 }
	total =total+arr[i];
 }
 printf("\nSum of All Elements = %d",total);
  printf("\nSum of All Positive  Elements = %d",sum_pos);
  printf("\nSum of All negative  Elements = %d",sum_neg);
 

}
