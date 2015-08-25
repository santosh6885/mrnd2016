#include<stdio.h>
#include<conio.h>
int maxele(char *);
void main()
{
	char str[20],ch;
	int  i;
	printf("Enter the string :");
	scanf("%s", str);
	
	ch = maxele(str);
	if (ch == '0')
		printf("No element is greater than half of length");
	else
		printf("The elements greater than half of length is %c", ch);
	getch();
}
int maxele(char *str)
{
	int i,count1 = 1 , max =0,count2=0;
	for (i = 1; str[i]; i++)
	{
		if (str[i] == str[max])
			count1++;
		else
			count1--;
		if (count1 == 0)
		{
			max = i;
			count1 = 1;
		}
	}
	for (i = 0; str[i]; i++)
	{
		if (str[i] == str[max])
			count2++;
	}
	if (count2 > i / 2)
		return str[max];
	else
		return '0';
	

}