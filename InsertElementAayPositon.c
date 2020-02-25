#include<stdio.h>
int main()
{
	int n,position,value,i;
	
	printf("Enter How Many Value Do You Insert :");
	scanf("%d",&n);
	int arr[n];
	
	printf("Ensert %d Elements.\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Insert Position between(1-%d) You Insert Value:",n+1);
	scanf("%d",&position);
	
	printf("Enter Value To Insert :");
	scanf("%d",&value);

	for(i=n-1;i>=position-1;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[position-1]=value;

	
	
	printf("After Inserting Value Your List is :");
	for(i=0;i<=n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
