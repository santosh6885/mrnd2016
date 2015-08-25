#include<stdio.h>
#include<conio.h>
void check2strings(char *, int[]);
void main()
{
	char str1[20], str2[20];
	int a[255] = { 0 }, i,ref,count=0,len1,len2,j=0;
	printf("Enter string 1:");
	scanf("%s", str1);
	printf("Enter string 2:");
	scanf("%s", str2);
	for (len1 = 0; str1[len1]; len1++);
	for (len2 = 0; str2[len2]; len2++);
	
	if (len1 == len2)
	{
		check2strings(str1, str2, a);

		for (i = 0; i < 256; i++)
		{

			if (a[i] == 1)
				count++;

		}
	}

	if (count == len1)
		printf("The permutations of string 1 and string 2 is true");
	else
		printf("The permutations of string 1 and string 2 is false");
	getch();
	
}
void check2strings(char *str1,char *str2 ,int ascii[])
{
	int i,ref1,ref2;
	for (i = 0; str1[i]; i++)
	{
		ref1 = str1[i];
		ref2 = str2[i];
		ascii[ref1] = 1;
		ascii[ref2] = 1;
	}

}