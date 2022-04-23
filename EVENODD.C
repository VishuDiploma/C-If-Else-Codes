#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\nEnter The No:-");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("\nNo is Even");
	}
	else
	{
		printf("\nNo is Odd");
	}
	getch();

}