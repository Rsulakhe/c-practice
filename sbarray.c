#include<stdio.h>
void main()
{
    int i;
    int a[5],b[5],c[5];
    printf("Enter the values for a \n");
    for(i=0;i<5;i++)
    {
	    printf("The value of a \n");
	    scanf("%d",&a);
    }
    printf("Enter the values for b \n");
    for(i=0;i<5;i++)
    {      
	    printf("The value of b \n");
	    scanf("%d",&b);
    }
    printf("the substaction of two array");
    for(i=0;i<5;i++)
    {
	    c[i]=a[i]-b[i];
	    printf("the substaction of %d & %d  %d \n",a[i],b[i],c[i]);
    }
}
