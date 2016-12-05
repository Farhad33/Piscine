#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main (void)
{
	char n;

	n = "hello world";
	ft_putchar(n);
	ft_putchar('\n');
}
