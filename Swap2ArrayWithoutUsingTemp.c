/* C Program to Swap Two Arrays Without Using Temp Variable */

#include<stdio.h>
int main()
{
	int n;
	printf("ENter THe Size of Array :");
	scanf("%d",&n);
	int a[n],b[n],i,j;
	printf("Enter The 1st Array :\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter The 2nd Array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		a[i]=a[i]+b[i];
		b[i]=a[i]-b[i];
		a[i]=a[i]-b[i];
	}
	printf("\n After Swapping 1st Array Elements \n", n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n After Swapping 2nd Array Elements\n", n);
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	
}
