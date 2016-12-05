#include <stdio.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data);

int	main(void)
{
	t_list *test = ft_create_elem("majid");

	printf("testing ->\n");
	printf("%s\n", test->data);

	return (0);
}
