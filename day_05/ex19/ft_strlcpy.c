#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	unsigned int result;
	i = 0;
	while (src[i])
		i++;
	result = i + size;
	return (result);
}

int		main()
{
	char src[] = "majid";
	char dest[] = "isis";

	printf("%u", strlcat(dest, src, 2));

	return (0);
}
