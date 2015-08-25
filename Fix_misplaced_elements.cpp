/*purpose of this program is to fix two misplaced elements */
#include<stdio.h>
#include<conio.h>
void fixele(int[],int);
int main()
{
	int a[10], n, i;
	printf("Enter the length of array:");
	scanf("%d", &n);
	printf("Enter %d elements ", n);
	for (i = 0; i<n; i++)
		scanf("%d", &a[i]);
	fixele(a,n);
	printf("The elements in sorted order are :");
	for (i = 0; i<n; i++)
		printf("%d", a[i]);
	getch();
	return 0;
}
void fixele(int a[],int n)
{
	int  i, j, flag = 0;

	for (i = 0; i<n - 2; i++)
	{
		if (a[i]>a[i + 1])
			break;
	}
	for (j = i + 1; j <= n - 2; j++)
	{
		if (a[j]>a[j + 1])
		{
			flag = 1;
			break;
		}
	}
	if (!flag)
		j = i;

	//swapping values in i and j+1
	a[i] = a[i] ^ a[j + 1];
	a[j + 1] = a[j + 1] ^ a[i];
	a[i] = a[j + 1] ^ a[i];
}
