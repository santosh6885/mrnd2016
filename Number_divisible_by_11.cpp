#include<stdio.h>
#include<conio.h>
int divisible(int );
void main()
{
	int num, x;
	printf("enter a number :");
	scanf("%d", &num);
	x = divisible(num);
	if (x == 0)
		printf("\n%d is divisible by 11",num);
	else
		printf(" \%d is not divisible by 11 and remainder is %d", num,x);
	getch();
}
int divisible(int n)
{
	int  i=0, sum1 = 0, sum2 = 0,k;

		while (n != 0)
		{
			if (i % 2 == 0)
				sum1 = sum1 + (n % 10);
			else
				sum2 = sum2 + (n % 10);
			i++;
			n = n / 10;


		}
	
	k = sum1 - sum2;
	if (k > 10)
		k = divisible(k);
	if (k == 0)
		return 0;
	else
		return k;
}