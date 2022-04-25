#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	clrscr();
	printf("\nEnter Any No:");
	scanf("%d",&no);
	if(no%2==0 && no%5==0)
	{
		printf("\nNo is Fully Divisible By  2&5");
	}
	else
	{
		printf("\nNo is Not Fully Divisible By 2&5");
	}
	getch();

}