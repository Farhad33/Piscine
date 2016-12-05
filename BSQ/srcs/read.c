#include "bsq.h"

void	first_line(char *line, t_bsq *b)
{
	int i;

	i = 0;
	while (line[i])
		i++;
	if (line[i] == '\0')
	{
		b->full = line[i - 1];
		b->ob = line[i - 2];
		b->sp = line[i - 3];
	}
}

void	read_line(char *argv, t_bsq *b)
{
	char	*line;
	int		i;
	int		j;
	int		fd;
	int		check;

	i = 0;
	j = 0;
	check = 1;
	b->map = malloc(sizeof(char*) * b->y + 1);
	line = malloc(sizeof(char) * b->x + 1);
	fd = open(argv, O_RDONLY);
	while (read(fd, &line[i], 1))
		if (line[i] == '\n')
		{
			line[i] = '\0';
			check ? first_line(line, b) : (b->map[j++] = line);
			check = 0;
			line = malloc(sizeof(char) * b->x + 1);
			i = 0;
		}
		else
			i++;
	close(fd);
}

int		read_file(char *argv, t_bsq *b)
{
	char	buf[1];
	int		fd;
	int		f_check;
	int		x_check;

	x_check = 1;
	f_check = 0;
	b->x = 0;
	b->y = 0;
	fd = open(argv, O_RDONLY);
	while (read(fd, buf, 1))
	{
		if (f_check && buf[0] == '\n')
			x_check = 0;
		if (buf[0] != '\n' && f_check && x_check)
			b->x++;
		if (buf[0] == '\n' && f_check)
			b->y++;
		if (buf[0] == '\n')
			f_check = 1;
	}
	close(fd);
	if (check_xy(b))
		return (1);
	read_line(argv, b);
	return (0);
}
