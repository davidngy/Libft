#include <string.h>
#include <stdio.h>

int	ft_strlen(const char *s);

int main()
{
	char *test[] = {
		"hola como estas!",
		"whats upd 3 23sdf",
		""
	};
	int length = sizeof(test) / sizeof(test[0]);
	for(int i = 0; i < length; i++) 
	{
		printf("orig: %ld, yours: %d\n", strlen(test[i]), ft_strlen(test[i]));
	}
}