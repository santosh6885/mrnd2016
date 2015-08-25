/*Purpose of this program is to find the length of the string*/
#include<stdio.h>
#include<conio.h>
int strlength(char *str);
int main()
{
	char str[20], length;
	printf("Enter a string:");
	scanf("%[^\n]s", str);
	length = strlength(str);
	printf("length of string is %d", length);
	getch();
	return 0;

}
int strlength(char *str)
{
	int len;
	for (len = 0; str[len] != '\0'; len++);
	return len;
}