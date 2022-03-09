#include "libft.h"
#include "push_swap.h"

int	argcount(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i + 1);
}
