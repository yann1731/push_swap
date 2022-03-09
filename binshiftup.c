#include "libft.h"
#include "push_swap.h"

void	binshiftup(char **binstack, int stacksize)
{
	int stop;
	int index;
	int	maxwidth;
	int	i;

	stop = stacksize;
	index = 0;
	maxwidth = -1;
	i = -1;
	while (binstack[0][maxwidth])
		maxwidth++;
	while (index < (stop - 1))
	{
		ft_strcpy(binstack[index], binstack[index + 1]);
		index++;
	}
	while (binstack[index][++i])
		binstack[index][i] = '\0';
}
