#include "libft.h"
#include "push_swap.h"

void	rrb(int *stack_b, int *stack_b_size)
{
	int temp;

	temp = *(stack_b + *stack_b_size);
	shiftstackdown(stack_b, stack_b_size);
	*(stack_b) = temp;
}
