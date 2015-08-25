#include<stdio.h>
#include<conio.h>
void max2nos(int[], int, int[]);
void main()
{
	int a[20], n, b[2],i,j;
	printf("Enter the length of array :");
	scanf("%d", &n);
	printf("Enter %d elements :", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	max2nos(a, n, b);
	printf("The highest two elements are :");
	for (j = 0; j < 2; j++)
		printf(" %d ", b[j]);
	getch();

}
void max2nos(int a[], int n, int b[])
{
	int max1 = a[0], max2 = a[1] , i ,j =1;
	if (max2 > max1)
	{
		max1 = max1 + max2;
		max2 = max1 - max2;
		max1 = max1 - max2;
	}
	

	for (i = 0; i < n; i++,j++)
	{
		if (max1 == max2)
		{
			max2 = a[j + 1];
		}
		if (a[i] > max1)
		{
			max2 = max1;
			max1 = a[i];

		}
		else if (a[i] > max2 && max1 != a[i])
		{
			max2 = a[i];
			
		}
	}
	b[0] = max1;
	b[1] = max2;
	
}