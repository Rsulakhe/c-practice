#include<stdio.h>
void main()
{
	int i;
	int a[5],b[5],c[5];
	for(i=0;i<5;i++)
	{
		printf("Enter the value ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("Enter the value ");
		scanf("%d",&b[i]);
	}
	printf("Output of addition of two array is :\n");;
	for(i=0;i<5;i++)
	{
		 c[i]=a[i]*b[i];
		 printf("\n The sum of %d & %d is %d \n",a[i],b[i],c[i]);
	}
}

