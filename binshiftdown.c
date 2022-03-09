#include "libft.h"
#include "push_swap.h"

void	binshiftdown(char **binstack, int stacksize)
{
	int index;

	index = stacksize;

	while (index > 0)
	{
		ft_strcpy(binstack[index], binstack[index - 1]);
		index--;
	}
}
