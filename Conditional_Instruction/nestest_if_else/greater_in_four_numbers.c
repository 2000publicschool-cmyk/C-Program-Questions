#include <stdio.h>
#include <conio.h>
void main()
{
	int a, b, c, d;
	printf("Enter four number:");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a > b)
	{
		if (a > c)
		{
			if (a > d)
				printf("%d is greater number", a);
			else
				printf("%d is greater number", d);
		}
		else
		{
			if (c > d)
				printf("%d is greater number", c);
			else
				printf("%d is greater number", d);
		}
	}
	else
	{
		if (b > c)
		{
			if (b > d)
				printf("%d is greater number", b);
			else
				printf("%d is greater number", d);
		}
		else
		{
			if (c > d)
				printf("%d is greater number", c);
			else
				printf("%d is greater number", d);
		}
	}

	getch();
}