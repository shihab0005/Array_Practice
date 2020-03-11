/* C Program to Add Two Matrices */
#include<stdio.h>
int main()
{
	int row ,col,m1[10][10],m2[10][10],add[10][10],i,j;
	
	printf("Enter Row and Column of Matrix :");
	scanf("%d %d",&row,&col);
	
	printf("ENter 1st Matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	
	printf("ENter 2nd Matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	printf("Addition of two Matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			add[i][j] =m1[i][j]+m2[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",add[i][j]);
		}
		printf("\n");
	}
	
}

