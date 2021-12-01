#include<stdio.h>

int numberOfCarries(int num1, int num2)
{
	int carry = 0, sum, p, q, count = 0;

	while ((num1 != 0) && (num2 != 0))

	{
		p = num1 % 10;
		q = num2 % 10;

		sum = carry + p + q;

		if (sum > 9)
		{
			carry = 1;
			count++;
		}

		else
		{
			carry = 0;
		}

		num1 = num1 / 10;
		num2 = num2 / 10;
	}

	return count;
}

int main()
{
	int x, y, a;
	printf("Enter the first number : ");
	scanf_s("%d", &x);
	printf("Enter the second number : ");
	scanf_s("%d", &y);
	a = numberOfCarries(x, y);
	printf("The total number of carry is %d", a);
	return 0;
}