#include "libft.h"
#include "push_swap.h"

void	ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dst[i] = src[i];
}
