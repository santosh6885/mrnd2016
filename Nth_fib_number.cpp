/*Purpose of this program is to print the fibonocci number at a given index*/
#include<conio.h>
#include<stdio.h>
int fibo(int);
int main()
{
	int n,f1=1,f2=1,f3,x;
	
	printf("Enter the index of fibonocii number to be printed : ");
	scanf("%d", &n);
	x = fibo(n);
	if (x == 0)
	{
		printf("Invalid input");
	}
	else
	{
		printf("Fibo no at given index is %d", x);
	}
	/*if (n>=0)
	{
		
		if (n>1)
		{
			for (i = 1; i < n; i++)
			{


				f3 = f1 + f2;

				f1 = f2;
				f2 = f3;
			}
			printf("%d", f3);
		}
		else
		{
			printf("%d", f1);
		}
		
	}
	else
	{
		printf("invalid input");
	}*/
	getch();
	return 0;
}
int fibo(int n)
{
	int i, f1 = 1, f2 = 1, f3;
	if (n >= 0)
	{

		if (n>1)
		{
			for (i = 1; i < n; i++)
			{


				f3 = f1 + f2;

				f1 = f2;
				f2 = f3;
			}
			return f3;
		}
		else
		{
			return f1;
		}

	}
	else
	{
		return 0;
	}

}