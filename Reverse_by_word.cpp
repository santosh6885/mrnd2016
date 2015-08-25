#include<stdio.h>
#include<conio.h>
void rev_sentence(char *);
void rev_word(char *, int,int);
void main()
{
	char str1[20];
	printf("Enter a sentence :");
	scanf("%[^\n]s", str1);
	rev_sentence(str1);
	printf("%s", str1);
	getch();

}
void rev_sentence(char *str1)
{
	int i,l,len,j=0,k;
	char temp;
	for (l = 0; str1[l]; l++);
	len = l - 1;

	for(i = 0; i < (l / 2); i++,len--)
	{
		temp = str1[i];
		str1[i] = str1[len];
		str1[len] = temp;
	}
	for (k = 0; str1[k]; k++)
	{
		if (str1[k] == ' ' )
		{
			rev_word(str1, k-1,j);
			j = k + 1;
		}
		if (str1[k + 1] == '\0')
		{
			rev_word(str1, k, j);
		}
	}
	

}
void rev_word(char *str1, int i,int j)
{
	int temp,k,m;
	m = (i - j) / 2;
	for (k = 0; k < m+1 ; j++,i--,k++)
	{

		temp = str1[j];
		str1[j] = str1[i];
		str1[i] = temp;
	}
}