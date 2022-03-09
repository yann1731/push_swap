#include "libft.h"
#include "push_swap.h"

void	large_sort(int *stack_a, int stack_a_size, int stack_b_size, int bit)
{
	char	**binstack_a;
	char	**binstack_b;
	int		i;

	i = -1;
	binstack_a = strstack(stack_a, stack_a_size);
	binstack_b = mallocbinstack(stack_a_size);
	large_sorting(binstack_a, binstack_b, stack_a_size, stack_b_size, bit);
	while (++i < (stack_a_size + 1))
	{
		free(binstack_a[i]);
		free(binstack_b[i]);
	}
	free(binstack_a);
	free(binstack_b);
}
