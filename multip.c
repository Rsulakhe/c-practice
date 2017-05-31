#include<stdio.h>
void main()
{
    int m,n,p,q,i,j,k,sum=0;
    int a[5][5],b[5][5],c[5][5];
    printf("Enter the number of rows and columns of first matrix \n");
    scanf("%d %d",&m,&n);
    printf("Enter the element of a \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the number of row and colums of second matrix \n");
    scanf("%d %d",&p,&q);
    printf("Enter the elements of b\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            for(k=0;k<p;k++)
            {
                sum = sum + a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }
    printf("product of entered matrices :- \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d \t",c[i][j]);

            printf("\n");
        }
    }
}        

