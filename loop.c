#include <stdio.h>

int main(void)
{
	int i = 1, count = 0;

	while (1)
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
			count++;
		}
		if (count == 15)
			break;
		i++;
	}
	return (0);
}
