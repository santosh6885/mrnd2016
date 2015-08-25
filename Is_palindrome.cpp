#include<stdio.h>
#include<conio.h>
int palindrome(char *);
void main()
{
	char str[20],x;
	printf("Enter a string :");
	scanf("%s", str);
	x = palindrome(str);
	if (x == 1)
		printf("The given string is a palindrome");
	else
		printf("The given string is not a palindrome");
	getch();

}
int palindrome(char *str)
{
	int i,l,flag=1;
	for (l = 0; str[l]; l++);
	l--;
	for (i = 0; i < l / 2; i++,l--)
	{
		if (str[i] == str[l])
			flag = 1;
		else
			flag = 0;
	}
	return flag;


}