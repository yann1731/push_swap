#include "libft.h"
#include "push_swap.h"

void	ra(int *stack_a, int *stack_a_size)
{
	int temp;

	temp = *stack_a;
	shiftstackup(stack_a, stack_a_size);
	*(stack_a + *stack_a_size) = temp;
	write(1, "ra\n", 3);
}
