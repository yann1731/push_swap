#include "libft.h"
#include "push_swap.h"

int	findindex(int *stack_a, int tofind, int stack_a_size)
{
	int	i;

	i = -1;
	while (++i < stack_a_size)
		if (stack_a[i] == tofind)
			return (i);
	return (-1);
}
