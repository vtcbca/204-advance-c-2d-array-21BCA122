#include<stdio.h>
#include<conio.h>
#include<stdio.h>
void sum(int []);

void main()
{
	int a[5],i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nEnter Value no: ");
		scanf("%d",&a[i]);
	}
	sum(a);
	getch();
}

void sum(int b[])
{
	int i,sum=0;
	for(i=0;i<5;i++)
		sum=sum + b[i];
	printf("\nThe sum is : ");
	printf("%d",sum);
}