#include<stdio.h>
#include<conio.h>
void check(char *, char *);
void insert(char *, char *);
void main()
{
	char str1[20], str2[20];
	printf("Enter string 1:");
	scanf("%s", str1);
	printf("Enter string 2 : ");
	scanf("%s", str2);
	check(str1, str2);
	getch();
}
void check(char *str1, char *str2)
{
	int i, j, x, y, flag = 0, count = 0, l;
	for (i = 0; str1[i]; i++);
	l = i - 1;
	if (i % 2 == 0)
	{
		for (j = 0; j < i / 2; j++, l--)
		{
			x = str1[j];
			y = str1[l];
			if (x == 40)
			{
				x--;
			}
			if (x + 2 == y)
			{
				flag = 1;
				count++;
			}
			else
			{
				flag = 0;
			}

		}
	}
	if (flag == 1)
	{
		insert(str1, str2);
	}
	if (flag == 0)
	{
		printf("Invalid string inputs");
	}
}
void insert(char *str1, char *str2)
{
	int i, j, len1, len2, p, l, total_len;
	for (len1 = 0; str1[len1]; len1++);
	for (len2 = 0; str2[len2]; len2++);
	p = len1 / 2;
	l = len1 - 1;
	total_len = len1 + len2;

	for (j = 0; str2[j]; j++, p++)
	{
		for (i = l; i > p - 1; i--)
		{
			str1[i + 1] = str1[i];
			l++;
		}
		str1[p] = str2[j];
	}
	str1[total_len] = '\0';
	printf("%s", str1);
	getch();
	exit(0);



}