#include "libft.h"
#include "push_swap.h"

void	smallsort(int *stack_a, int stack_a_size)
{
	while (is_sorted(stack_a, stack_a_size) == 0)
	{
		if (stack_a[0] > stack_a[1])
			sa(stack_a, stack_a_size);
	}
}