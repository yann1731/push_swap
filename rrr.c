#include "libft.h"
#include "push_swap.h"

void	rrr(int *stack_a, int *stack_b, int stack_a_size, int stack_b_size)
{
	rra(stack_a, stack_a_size);
	rrb(stack_b, stack_b_size);
	write(1, "rrr\n", 4);
}
