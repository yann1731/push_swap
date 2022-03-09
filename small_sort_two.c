#include "libft.h"
#include "push_swap.h"

void	small_sort_two(int *stack_a, int stack_a_size)
{
	if (stack_a_size == 2)
		if (stack_a[0] > stack_a[1])
			sa(stack_a, stack_a_size);
}
