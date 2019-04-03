

#include <stdio.h>

//#define PRINT(a,b) printf("#b =%#a\n",b)

void findarmstrong(int num,int pow);
int findpow(int num);
int multiply(int n,int pow);


int main()
{
	int num,lnum,unum,pow;
	char ch;

	printf("1-find armstrong num in range\n2-Enter number\n");
	scanf("%c",&ch);

	switch(ch)
	{
		case '1':
			{
				printf("Enter the range a and b ");
				scanf("%d,%d",&lnum,&unum);
				pow = findpow(lnum);
				for(int i = lnum; i < unum; i++)
				{
					findarmstrong(i,pow);
				}
				break;
			}
		case '2':
			{
				printf("Enter the num ");
				scanf("%d",&num);

				pow = findpow(num);
				//	PRINT(d,pow);
//				printf("pow = %d\n",pow);

				if( pow > 1)
				{
					findarmstrong(num,pow);
				}
				else
				{
					printf("Try another num!!!\n");
				}
				
				break;
			}
	}
		printf("\n");
}

void findarmstrong(int num,int pow)
{
	int sum = 0,cpy = num,dig;
	
	while(num)
	{
		dig = num % 10;
		sum = sum + multiply(dig,pow);
		num /= 10;
	}
	if(cpy == sum)
	{
		printf("%d  ",sum);
	}
}

int findpow(int num)
{
	int pow = 0;
	do
	{
		pow++;
	}while(num /= 10);

	return pow;
}

int multiply(int n,int pow)
{
	int res = 1;
	while(pow--)
	{
		res = res * n;
	}
	return res;
}
