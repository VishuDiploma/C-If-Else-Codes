#include<stdio.h>
#include<conio.h>
void main()
{                     // put three number
	int a,b,c;
	clrscr();
	printf("\nEnter The Number a:");
	scanf("%d",&a);
	printf("\nEnter The Number b:");
	scanf("%d",&b);
	printf("\nEnter The Number c:");
	scanf("%d",&c);
	if(a>b)
	{                                //nested if else
		if(a>c)
		{
		printf("\nA is Big");
		}
		else
		{
		printf("\nB is Big");
		}
	}
	else
	{
		if(b>c)
		{
		printf("\nB is Big");
		}
		else
		{
		printf("\nC is Big");
		}
}
	getch();

}