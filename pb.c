#include "libft.h"
#include "push_swap.h"

void	pa(int *stack_a, int *stack_b, int *stack_a_size, int *stack_b_size)
{
	if (*stack_a_size != 0)
	{
		shiftstackdown(stack_b, stack_b_size);
		*stack_b = *stack_a;
		shiftstackup(stack_a, stack_a_size);
		*stack_b_size += 1;
		*stack_a_size -= 1;
	}
}
