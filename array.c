#include<stdio.h>
void main()
{
int i;
int arr[10]={11,12,13,14,15,16,17,18,19,20};
arr[1]=11;
arr[2]=12;
arr[3]=13;
arr[4]=14;
arr[5]=15;
arr[6]=16;
arr[7]=17;
arr[8]=18;
arr[9]=19;
arr[10]=20;
for(i=0;i<10;i++)
{
printf("value [%d] of %d\n",i,arr[i]);
}
}
