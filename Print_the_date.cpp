#include<stdio.h>
#include<conio.h>
void convert(int, int, int);
void towords(int);
void monthtowords(int);
void main()
{
	int day, month, year;
	printf("Enter day :");
	scanf("%d", &day);
	printf("Enter month :");
	scanf("%d", &month);
	printf("Enter year :");
	scanf("%d", &year);
	convert(day, month, year);
	getch();

}
void convert(int day,int month,int year)
{
	int leap=0;
	if (day < 32 && day>0&&month>0&&month<13)
	{
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day <= 31)
			{
				printf("Entered Date is : %d - %d - %d\n", day, month, year);
				printf("Date in words is :");
				towords(day, month);
			}
			else
			{
				printf("invalid date ");
				getch();
				exit(0);
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day <= 30)
			{
				printf("Entered Date is : %d - %d - %d\n", day, month, year);
				printf("Date in words is :");
				towords(day, month);
			}
			else
			{
				printf("invalid date ");
				getch();
				exit(0);
			}
			break;
		
		case 2:
			if (day < 30 && year % 4 == 0)
			{
				printf("Entered Date is : %d - %d - %d\n", day, month, year);
				printf("Date in words is :");
				towords(day, month);
				leap = 1;
			}
			else if (day < 29 )
			{
				printf("Entered Date is : %d - %d - %d\n", day, month, year);
				printf("Date in words is :");
				
				towords(day, month);
				
			}
			else
			{
				printf("invalid date ");
				getch();
				exit(0);
			}
			break;
			

		default :
			printf("invalid date ");
			getch();
			exit(0);
			break;
			


		}
	}
	else
	{
		printf("invalid date ");
		getch();
		exit(0);
	}
	printf(" - ");
	monthtowords(month);

	printf(" - ");
	towords(year,month);
	if (leap == 1)
	{
		printf("\nThe given year is leap year........");
	}
}
void towords(int no,int m)
{

		char a[10][10] = { "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE" };
		char b[10][10] = { "ELEVEN", "TWELVE", "THIRTEEN", "FOURTEEN", "FIFTEEN", "SIXTEEN", "SEVENTEEN", "EIGHTEEN", "NINTEEN" };
		char c[10][10] = { "TEN", "TWENTY", "THIRTY", "FOURTY", "FIFTY", "SIXTY", "SEVENTY", "EIGHTY", "NINTY" };
		int  t;
		if (no > 1000)
		{
			t = no / 1000;
			no = no % 1000;
			printf(" %s THOUSAND", a[t - 1]);


		}
		if (no > 100)
		{
			t = no / 100;
			no = no % 100;
			printf(" %s HUNDRED AND ", a[t - 1]);
		}
		if (no >= 10 && no < 20)
		{
			t = no % 10;
			printf(" %s", b[t - 1]);


		}
		if (no>19 && no <= 100)
		{
			t = no / 10;
			no = no % 10;
			printf(" %s ", c[t - 1]);


		}
		if (no < 10)
		{
			printf(" %s", a[no - 1]);
		}
	

}
void monthtowords(int m)
{
	switch (m)
	{
	case 1:
		printf("JANUARY");
		break;
	case 2:
		printf("FEBRUARY");
		break;
	case 3:
		printf("MARCH");
		break;
	case 4:
		printf("APRIL");
		break;
	case 5:
		printf("MAY");
		break;
	case 6:
		printf("JUNE");
		break;
	case 7:
		printf("JULY");
		break;
	case 8:
		printf("AUGUST");
		break;
	case 9:
		printf("SEPTEMBER");
		break;
	case 10:
		printf("OCTOBUR");
		break;
	case 11:
		printf("NOVUMBER");
		break;
	case 12:
		printf("DECEMBER");
		break;
	default :
		printf("Invalid Month");
		break;
	}
}