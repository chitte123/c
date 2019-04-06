#include<stdio.h>

void readstring(char str1[]);
void issubstring(char str1[],char str2[]);
int my_strlen(char str[]);
int main()
{

	char str1[100],str2[100],ch;

	printf("1-Is substring\n2-rmv-delimt\n");
	scanf("\n%c",&ch);

	switch(ch)
	{
		case '1':
			{
				readstring(str1);
				readstring(str2);
				issubstring(str1,str2);
				break;
			}
	}
}

void readstring(char str1[])
{
	scanf("\n%[^\n]s",str1);
}

int my_strlen(char str[])
{
	int i = 0;
	while(str[i++]);
	return --i;
}

void issubstring(char str1[],char str2[])
{
	int i,j,l1 = my_strlen(str1),l2;
	l2 = my_strlen(str2);

	printf("l1 = %d l2 = %d\n",l1,l2);

	for(i = 0; i < (l1 - l2); i++)
	{
		for(j = 0; j < l2; j++)
		{
			if(str1[i + j] != str2[j])
				break;
		}
		if(j == l2)
		{
			printf("string found \n");
			return;
		}
	}
	printf("Not found\n");
}









