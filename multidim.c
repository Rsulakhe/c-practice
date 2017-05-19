#include<stdio.h>
void main()
{
int i,j;
int arr[2][2]={10,20,30,40};
arr[0][0]=40;
arr[0][1]=30;
arr[1][0]=20;
arr[1][1]=10;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("value of arr[%d][%d]:%d\n",i,j,arr[i][j]);
}
}
} 
