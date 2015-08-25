/*Purpose of this program is to find the sum of all numbers in a given digit*/
#include<stdio.h>
#include<conio.h>
int sumofno(int x);
int main()
{
	int num=0,s;
	printf("Enter the number to find its sum");
	scanf("%d", &num);
	s = sumofno(num);
	printf("%d", s);
	getch();
	return 0;

}
int sumofno(int x)
{
	int sum=0;
	while (x != 0)
	{
		sum = sum + x %10;
		x = x / 10;
	}
	return sum;
		
}
