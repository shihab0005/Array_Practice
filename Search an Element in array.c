/* C Program to Search an Element in an Array

ENter THe Size of array :5
ENter 5 elements :
22
31
2
3
4

Enter value you want to find :22
Your finding value 22 is 1 position.

 */

#include<stdio.h>
int main()
{
	int i,n,flag=0,find;
	printf("ENter THe Size of array :");
	scanf("%d",&n);
	int arr[n];
	printf("ENter %d elements :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter value you want to find :");
	scanf("%d",&find);
	for(i=0;i<n;i++)
	{
		if(arr[i]==find)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Your finding value %d is %d position. ",find,i+1);
	}
	else{
		printf("Your finding value %d is not find in Array.",find);
	}
}
