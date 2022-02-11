#include "libft.h"
#include "push_swap.h"

void	ss(int *stack_a, int *stack_b, int stack_a_size, int stack_b_size)
{
	sa(stack_a, stack_a_size);
	sb(stack_b, stack_b_size);
	write(1, "ss\n", 3);
}
