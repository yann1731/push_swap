#include "libft.h"
#include "push_swap.h"

void	small_sort(int *stack_a, int stack_a_size)
{
	if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2] && stack_a[0] < stack_a[2])
		sa(stack_a, stack_a_size);
	if (is_rsorted(stack_a, stack_a_size) == 1)
	{
		sa(stack_a, stack_a_size);
		rra(stack_a, stack_a_size);
	}
	if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2] && stack_a[0] > stack_a[2])
		ra(stack_a, stack_a_size);
	if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2] && stack_a[0] < stack_a[2])
	{
		sa(stack_a, stack_a_size);
		ra(stack_a, stack_a_size);
	}
	if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2] && stack_a[0] > stack_a[2])
		rra(stack_a, stack_a_size);
}
