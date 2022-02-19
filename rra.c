#include "libft.h"
#include "push_swap.h"

void	rra(int *stack_a, int stack_a_size)
{
	int temp;

	temp = *(stack_a + stack_a_size);
	shiftstackdown(stack_a, stack_a_size);
	*(stack_a) = temp;
	write(1, "rra\n", 4);
}
