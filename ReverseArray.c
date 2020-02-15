/* C Program to Reverse an Array  */
#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("ENter THe Size of Array:");
	scanf("%d",&n);
	int arr[n];
	printf("insert %d Elements :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Your Isert Array IS:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
		printf("\nYour Isert Array In Reverse Order:");
	for(i=n-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
}
