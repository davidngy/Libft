#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c);

int	test_isalnum()
{
	for (int i = 0; i <= 122; i++)
	{
		if ((ft_isalnum(i) == 0 && isalnum(i) != 0)
			|| (ft_isalnum(i) == 1 && isalnum(i) == 0))
		{
			printf("diffrent output!\n");
			return (1);
		}
		if (ft_isalnum(i) == 0 && isalnum(i) == 0)
			printf("input: %c not alnum\n", i);
		else
			printf("input: %c is alnum\n", i);
	}
	return (0);
}

int main()
{
	test_isalnum();
}