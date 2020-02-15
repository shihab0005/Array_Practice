/* C Program to Sort Array in Ascending Order */
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
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			
		}
		
	}
	printf(" Sort Array in Ascending Order :\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
