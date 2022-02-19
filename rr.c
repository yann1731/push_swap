#include "libft.h"
#include "push_swap.h"

void	rr(int *stack_a, int *stack_b, int stack_a_size, int stack_b_size)
{
	ra(stack_a, stack_a_size);
	rb(stack_b, stack_b_size);
	write(1, "rr\n", 3);
}
