/*Purpose of this program is to rotate the given array n times*/
#include<stdio.h>
#include<conio.h>
void rotate(int[], int , int);
int main()
{
	int a[20], n,x,i;
	printf("enter the length of array:");
	scanf("%d", &n);
	printf("Enter %d elements :", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("enter no of times to rotate:");
	scanf("%d", &x);
	rotate(a, n, x);
	for (i = 0; i < n; i++)
		printf("%d",a[i]);
	getch();
	return 0;


}
void rotate(int a[], int n, int x)
{
	int i,j;
	if (x >= 0)
	{
		for (i = 0; i < x; i++)
		{
			for (j = 0; j < n - 1; j++)
			{
				a[j] = a[j] + a[n - 1];
				a[n - 1] = a[j] - a[n - 1];
				a[j] = a[j] - a[n - 1];
			}
		}
	}
	else
	{
		printf("invalid input");
		getch();
		exit(0);
	}

}