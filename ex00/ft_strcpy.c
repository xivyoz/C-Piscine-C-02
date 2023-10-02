#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	value;

	value = 0;
	while (src[value])
	{
		dest[value] = src[value];
		value++;
	}
	dest[value] = src[value];
	return (dest);
}
