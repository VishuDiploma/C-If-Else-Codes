#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f=0;
	clrscr();
	printf("\nEnter the Temperture in Celsius:");
	scanf("%f",&c);
	if(c<=0)
	{
		printf("\nPlease Enter Temprature in Positive No");
	}
	else
	{
		f=(c*1.8)+32;
		printf("\nFahrenhiet = %f",f);
	}
	getch();

}