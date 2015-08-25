#include<stdio.h>
#include<conio.h>
void commonchar(char *, char *, int);
void main()
{
	char str1[20], str2[20],ch;
	int a[255] = { 0 }, i;
	printf("Enter first string :");
	scanf("%s", str1);
	printf("Enter Second string :");
	scanf("%s", str2);
	commonchar(str1, str2, a);
	for (i = 0; i < 256; i++)
	{
		if (a[i] == 1)
		{
			printf("%c", i);
		}
	}
	getch();
}
void commonchar(char *str1, char *str2, int a[])
{
	int i , j,k;
	for (i = 0; str1[i]; i++)
	{
		for (j = 0; str2[j]; j++)
		{

			if (str1[i] == str2[j])
			{
				k = str1[i];
				a[k] = 1;
			}

		}
	}
}