#include<stdio.h>
void main()
{
	int i,j,m,n,a[5][5],b[5][5],c[5][5];
	printf("Enter the row and column \n");
	scanf("%d %d",&m,&n);
	printf("Enter the values for a \n");
	for(i=0 ;i<m; i++)
	{
		for(j=0; j<n; j++)
		{
				printf("element %d %d ",i+1,j+1);
				scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the values for b \n");
	for(i=0 ;i<m; i++)
	{
		for(j=0; j<n; j++)
		{
		printf("element %d %d ",i+1,j+1);	
		scanf("%d",&b[i][j]);
		}
	}
	printf("The addition of two \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j] = a[i][j]+b[i][j];
			printf(" %d",c[i][j]);
		}
		printf("\n");
	}
}
