#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int	test_isprint()
{
	for (int i = 10; i <= 130; i++)
	{
		if ((ft_isprint(i) == 0 && isprint(i) != 0)
			|| (ft_isprint(i) == 1 && isprint(i) == 0))
		{
			printf("diffrent output!\n you: %d, orig: %d\n", ft_isprint(i), isprint(i));
			return (1);
		}
		if (ft_isprint(i) == 0 && isprint(i) == 0)
			printf("input: %c not printable\n", i);
		else
			printf("input: %c is printable\n", i);
	}
	return (0);
}

int main()
{
	test_isprint();
}