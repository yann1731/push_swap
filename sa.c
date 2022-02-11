#include "libft.h"
#include "push_swap.h"

void	sa(int *stack_a, int stack_a_size)
{
	int	tmpvalue;

	if (stack_a_size < 2)
		return ;
	tmpvalue = stack_a[0];
	*(stack_a) = *(stack_a + 1);
	*(stack_a + 1) = tmpvalue;
	write(1, "sa\n", 1);
}
