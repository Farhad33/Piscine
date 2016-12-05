#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		j;
	int		i;
	char	*dst;

	i = 0;
	j = 0;
	if (src == '\0')
		return (NULL);
	while (str[i])
		i++;
	dst = (char *)malloc(sizeof(char) * (i + 1));
	while (str[j])
	{
		dst[j] = str[j];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}
/* #include <stdlib.h>
 
 char	*ft_strdup(char *src)
 {
	int		i;
	int		j;
	char	*str;
 
	i = 0;
	j = 0;
	while (src[i] != '\0')
 i++;
	if (src != 0)
	{
 str = (char*)malloc(sizeof(*str) * i + 1);
 if (str != 0)
 {
 while (src[j] != '\0')
 {
 str[j] = src[j];
 j++;
 }
 str[j] = '\0';
 return (str);
 }
	}
	return (0);
 }*/