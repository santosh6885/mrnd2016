/*Purpose of this program is to insert an integer into sorted array such that they are still in sorted order */
#include<stdio.h>
#include<conio.h>
void insertintoarray(int[], int, int);
int n;
int main()
{
	int a[20], i,  x;
	printf("enter the length of array:");
	scanf("%d", &n);
	printf("%d elements:", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("enter the digit you want to insert :");
	scanf("%d", &x);
	insertintoarray(a, n, x);
	for (i = 0; i <= n; i++)
		printf("%d", a[i]);
	getch();
	return 0;


}
void insertintoarray(int a[], int n, int x)
{
	int i, k,r,temp1;
	for (i = 0; i<n; i++)
	{
		if (x >=a[i] && x <=a[i + 1])
		{
			r = i + 1;
			
			for (k = n; k>i;k--)
			{
				a[k + 1] = a[k];
			}
			n++;
			
			a[r] = x;
			break;
		}
		else if (x < a[0])
		{
			temp1 = a[0];
			for (k = n; k >i; k--)
				a[k + 1] = a[k];
			n++;
			a[0] = x;
			a[1] = temp1;

			 


		}
		else if (x > a[0])
		{
			a[n ] = x;
			n++;
		}
	}
	
			
		


	


}