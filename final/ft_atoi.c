#include "majid.h"

int		ft_atoi(char *str)
{
	int		index;
	int		result;
	char	c;

	index = 0;
	result = 0;
	if (str[0] == 45)
		index++;
	while (str[index])
	{
		c = str[index];
		if (!((c >= 48 && c <= 57) || (c >= 9 && c <= 32)))
			return result;
		if ((c >= 48 && c <= 57))
			result = result * 10 + (c - '0');
		index++;
	}
	if (str[0] == 45)
		result = -result;
	return (result);
}



int		main(void)
{
	ft_putnbr(123);
	// ft_putstr("42majd");
	return (0);
}
