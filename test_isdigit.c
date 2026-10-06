#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c);

int	test_isdigit()
{
	for (int i = '0'; i <= 89; i++)
	{
		if ((ft_isdigit(i) == 0 && isdigit(i) != 0)
			|| (ft_isdigit(i) == 1 && isdigit(i) == 0))
		{
			printf("diffrent output!\n");
			return (1);
		}
		if (ft_isdigit(i) == 0 && isdigit(i) == 0)
			printf("input: %c not digit\n", i);
		else
			printf("input: %c is digit\n", i);
	}
	return (0);
}

int main()
{
	test_isdigit();
}