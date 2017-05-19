#include<stdio.h>
void main()
{
int a;
char b[10]={'a','b','c','d','e','f','g','h','i','j'};
b[1]='a';
b[2]='b';
b[3]='c';
b[4]='d';
b[5]='e';
b[6]='f';
b[7]='g';
b[8]='h';
b[9]='i';
b[10]='j';
for(a=0;a<11;a++)
	{
	printf("value [%d] of %c\n",a,b[a]);
	}
}
