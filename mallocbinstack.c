#include "libft.h"
#include "push_swap.h"

char	**mallocbinstack(int stack_a_size)
{
	char	**binstack;
	int		maxwidth;
	int		i;

	i = -1;
	maxwidth = maxbinwidth(stack_a_size);
	binstack = malloc(stack_a_size * sizeof(char *));
	while (++i < stack_a_size)
	{
		binstack[i] = malloc((maxwidth + 1) * sizeof(char));
		ft_memset((void *) binstack[i], 0, maxwidth + 1);
	}
	return (binstack);
}
