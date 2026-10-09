#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

int main()
{
	printf("%c, yours: %c", toupper('5'), ft_toupper('5'));
}