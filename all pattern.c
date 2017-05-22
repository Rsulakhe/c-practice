#include<stdio.h>
void main()
{
int ch,tri;
	ch = 1;
		
		do
		{
		printf("\n \t Choices :");
		printf("\n \t 1.First choice");
		printf("\n \t 2.Second choice");
		printf("\n \t 3.Thired choice");
		printf("\n \t 4.Fourth choice");
		printf("\n \t 5.Fifth choice");
		printf("\n \t Enter your choice");
		scanf("%d",&ch);

		switch(ch)
			{
			case 1: tri 1();
				printf("case 1 is executed");
 				break;
			case 2 : tri 2();
				printf("case 2 is executed");
				break;
			case 3: tri 3();
				printf("case 3 is executed");
				break;
			case 4: tri 4();
				printf("case 4 is executed");
				break;
			case 5: tri 5();
				printf("case 5 is executed");
				break;
			default:printf("incorrect choice entered");
	 		       	 break;
			}
	while(ch != 5);
	}
void tri 1()
{
int i,j;
	for(i=1;i<=7;i++)
	{
        	for(j=i;j<=7;j++)
		{
			printf(" ");
		}
			for(j=1;j<=i;j++)
			{
				printf("*");
			}
	printf("\n");
	}
}
void tri 2()
{
int i,j;
	for(i=1;i<7;i++)
	{
		for(j=1;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

}
void tri 3()
{
int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=i;j<7;j++)
		{
			printf("*");
		}
	printf("\n");
	}
}
void tri 4()
{
int i,j;
for(i=1;i<=7;i++)
	{
	for(j=1;j<=i;j++)
		{
		printf(" ");
		}
		for(j=i;j<=7;j++)
			{
			printf("*");
			}
	}
}
void tri 5()
{
int i,j;
	for(i=1;i<=7;i++)
	{
        	for(j=i;j<=7;j++)
		{
			printf(" ");
		}
			for(j=1;j<=i;j++)
			{
				printf("*");
			}

	printf("\n");
	}

        for(i=1;i<7;i++)
	{
		for(j=1;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for(i=1;i<=7;i++)
	{
		for(j=i;j<7;j++)
		{
			printf("*");
		}
	printf("\n");
	}

	for(i=1;i<=7;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
			}
			for(j=i;j<=7;j++)
			{
				printf("*");
			}
	printf("\n");
	}

}

