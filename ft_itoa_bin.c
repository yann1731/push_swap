#include "libft.h"
#include "push_swap.h"

char	*ft_itoa_bin(unsigned long long n, int maxwidth)
{
	char	*str;

	if (n == 0)
	{
		str = malloc((maxwidth + 1) * sizeof(char));
		str[maxwidth] = '\0';
		while (maxwidth > 0)
		{
			str[maxwidth - 1] = '0';
			maxwidth--; 
		}
		return (str);
	}
	str = malloc((maxwidth + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	else
		str = posnumbin(n, str, maxwidth);
	return (str);
}
