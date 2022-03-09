#include "libft.h"
#include "push_swap.h"

int	is_rsorted(int *stack_b, int stack_b_size)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	if (stack_b_size < 2)
		return (0);
	while (j < stack_b_size)
	{
		if (stack_b[i] < stack_b[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}
