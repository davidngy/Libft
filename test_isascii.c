#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c);

int	test_isascii()
{
	for (int i = 0; i <= 140; i++)
	{
		if ((ft_isascii(i) == 0 && isascii(i) != 0)
			|| (ft_isascii(i) == 1 && isascii(i) == 0))
		{
			printf("diffrent output!\n you: %d, orig: %d\n", ft_isascii(i), isascii(i));
			return (1);
		}
		if (ft_isascii(i) == 0 && isascii(i) == 0)
			printf("input: %d not ascii\n", i);
		else
			printf("input: %d is ascii\n", i);
	}
	return (0);
}

int main()
{
	test_isascii();
}