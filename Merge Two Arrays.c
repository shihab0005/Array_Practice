/*Merge Two Arrays
Enter The Range of 1st array :5
Enter Elements Of 1st Array :
34
23
12
32
4
Enter The Range of 2nd array :3
Enter Elements Of 2nd Array :
22
990
80
After MArge two Array :
 34 23 12 32 4 22 990 80

*/
#include<stdio.h>
int main()
{
	int n1,n2,i,j;
	printf("Enter The Range of 1st array :");
	scanf("%d",&n1);
	
	int a[n1];
	printf("Enter Elements Of 1st Array :\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter The Range of 2nd array :");
	scanf("%d",&n2);
	int b[n2];
	printf("Enter Elements Of 2nd Array :\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("After MArge two Array :\n ");
	for(i=0;i<n2;i++)
	{
		a[n1+i]=b[i];
	}
	for(i=0;i<n1+n2;i++){
		printf("%d ",a[i]);
	}
}
