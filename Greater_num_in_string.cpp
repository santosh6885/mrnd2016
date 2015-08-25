/*Purpose of this program is to find the greatest of two numbers using strings covering all the test cases */
#include<stdio.h>
#include<conio.h>
void stringgreater(char *s1, char *s2);
int main()
{
	char str1[20], str2[20];
	printf("enter 1 number:");
	scanf("%s", str1);
	printf("enter 2 number:");
	scanf("%s", str2);
	stringgreater(str1, str2);
	getch();
	flushall();
	return 0;

}
void stringgreater(char *s1, char *s2)
{
	int l1=0, l2=0, i, count1 = 0,count2=0,j=0,k=0;
	if (s1[l1] == '-')
	{
		l1++;
	}
	if (s2[l2] == '-')
	{
		l2++;
	}
	for (l1 = l1; s1[l1] != '\0'; l1++)
	{
		if (s1[l1] != '0')
		{
			count1++;
			if (count1 == 1)
				k = l1;
		}
		if (count1 != 0 && s1[l1] == '0')
			count1++;
			

	}
	for (l2 = l2; s2[l2] != '\0'; l2++)
	{
		if (s2[l2] != '0')
		{
			count2++;
			if (count2 == 1)
				j = l2;
		}
		if (count2 != 0 && s2[l2] == '0')
			count2++;

	}
	if (count1 > count2)
	{
		if (s1[0] == '-')
		{
			printf("%s is greater", s2);
		}


		else
		{
			printf("%s is greater \n", s1);
		
		}
		
	}
	else if (count1 == count2)
	{
		for (i = 0; s1[i] != '\0'; i++,k++,j++)
		{
			if (s1[0] == '-' && s2[0] == '-')
			{
				if (s1[k] > s2[j])
				{

					printf("%s is greater\n", s2);
					break;
				}
				else if (s1[k] < s2[j])
				{
					printf("%s is greater \n", s1);
					break;
				}
				else if (i == count1 -1)
				{
					printf("both the strings are equal");
					break;
					
				}


			}
			else if (s1[0] == '-' && s2[0] != '-')
			{
				printf("%s is greater \n", s2);
				break;
			}
			else if (s2[0] == '-' && s1[0] != '-')
			{

				printf("%s is greater\n", s1);
				break;

			}
			else
			{
				if (s1[k] > s2[j])
				{

					printf("%s is greater\n", s1);
					break;
				}
				else if (s1[k] < s2[j])
				{
					printf("%s is greater \n", s2);
					break;
				}
				else if ( i == count1-1)
				{
					printf("Both the strings are equal");
					break;
				}
			}

		}
	}
	else
	{
		if (s2[0] == '-')
		{
			printf("%s is greater", s1);
		}
		else
		{
			printf("%s is greater\n", s2);
		}
	}
	
	

}