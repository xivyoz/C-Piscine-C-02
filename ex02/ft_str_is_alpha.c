#include <string.h>

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 122)
		{
			return (0);
		}
		else if (str[i] > 90 && str[i] < 97)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
