/* C Program to Check Two Matrices are Equal or Not

Enter Row and Column of Matrix :2 3
ENter 1st Matrix :
1 2 3
4 5 6
ENter 2nd Matrix :
1 2 3
4 5 6

 1st Matrix  is Equal to 2nd Matrix


 */

#include<stdio.h>
int main()
{
	int row ,col,m1[10][10],m2[10][10],add[10][10],i,j,flag=0;
	
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
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(m1[i][j]!=m2[i][j])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	{
		printf("\n 1st Matrix  is Equal to 2nd Matrix");
	}
	else{
		printf("\n 1st Matrix  is Not Equal to 2nd Matrix !!");
	}
}
