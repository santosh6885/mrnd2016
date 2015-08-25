/*Purpose of this program is to find the letter from the last given number*/
#include<stdio.h>
#include<conio.h>
char lastchar(char[], int);
int main()
{
	char str[20],ch;
	int i, n, j = 0;
	printf("Enter a string:");
	scanf("%s", str);
	printf("enter the index of letter you want to find from last :");
	scanf("%d", &n);
	ch = lastchar(str, n);
	if (ch == 0)
	{
		printf("Invalid input");
	}
	else
	{
		printf("The last %d letter is %c", n, ch);
	}
	getch();
	return 0;

}
char lastchar(char *str, int n)
{
	int i, j=0;
	if (n > 0)
	{
		for (i = n; str[i] != '\0'; i++)
		{
			j++;

		}

		return str[j];
	}
	else
	{
		return 0;
	}
}