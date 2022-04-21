#include<stdio.h>
#include<conio.h>
void main()
{
	float price,qty,bill=0,discount=0,netbill=0;
	clrscr();
	printf("\n***** Ice Point *****");
	printf("\nEnter The Ice Cream Price:-");
	scanf("%f",&price);
	printf("\nEnter The Ice Cream Qty:-");
	scanf("%f",&qty);
	bill=price*qty;
	printf("\nbill=%f",bill);
	if(bill>=200)
	{
		printf("\nYou Have Got 10% Discount");
		discount=bill*0.10;
		printf("\nDiscount=%d",discount);
		netbill=bill-discount;
		printf("\nNet Bill=%f",netbill);
		printf("\nThanks For Visit...");
	}
	else
	{
		printf("\nYou Do Not Have Any Discount");
		printf("\nThanks For Visit...");
	}

	getch();

}