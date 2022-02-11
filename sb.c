#include "libft.h"
#include "push_swap.h"

void	sb(int *stack_b, int stack_b_size)
{
	int	tmpvalue;

	if (stack_b_size < 2)
		return ;
	tmpvalue = stack_b[0];
	*(stack_b) = *(stack_b + 1);
	*(stack_b + 1) = tmpvalue;
	write(1, "sb\n", 3);
}
