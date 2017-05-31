#include<stdio.h>
void main()
{
int i;
int a[5],b[5],c[5];
printf("Enter the values for a \n");
for(i=0;i<5;i++)
{
	printf("The value of array a \n");
	scanf("%d",&a[i]);
}
printf("Enter the values for b \n");
for(i=0;i<5;i++)
{
	printf("The values of array b \n");
	scanf("%d",&b[i]);
}
printf("The division of two array is c \n");
for(i=0;i<5;i++)
{
	c[i]=a[i]%b[i];
	printf("the division of %d & %d is %d \n",a[i],b[i],c[i]);
}
}
	

