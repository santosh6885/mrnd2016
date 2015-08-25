#include<stdio.h>
void tuple(int a[], int n, int b);
void main()
{
	int a[20], n, i, x;
	printf("Enter no of values of array :");
	scanf("%d", &n);
	printf("Enter %d elements",n);
	for (i = 0; i<n; i++)
		scanf("%d", &a[i]);
	printf("Enter tuple value :");
	scanf("%d", &x);
	tuple(a, n, x);
	getch();
}
void tuple(int a[], int n, int x)
{
	int i, j;
	printf("The tuple values are :\n ");
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
			if (x == (a[i] + a[j]))
				printf("%d, %d\n", a[i], a[j]);
	}
}