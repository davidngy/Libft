#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);

int	test_isalpha()
{
	for (int i = 65; i <= 122; i++)
	{
		if ((ft_isalpha(i) == 0 && isalpha(i) != 0)
			|| (ft_isalpha(i) == 1 && isalpha(i) == 0))
		{
			printf("diffrent output!\n");
			return (1);
		}
		if (ft_isalpha(i) == 0 && isalpha(i) == 0)
			printf("input: %c not alpha\n", i);
		else
			printf("input: %c is alpha\n", i);
	}
	return (0);
}

int main()
{
	test_isalpha();
}