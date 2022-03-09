#include "libft.h"
#include "push_swap.h"

void	pabin(char **binstack_a, char **binstack_b, int *stack_a_size, int *stack_b_size)
{
	if (*stack_b_size != 0)
	{
		binshiftdown(binstack_a, *stack_a_size);
		ft_strcpy(binstack_a[0], binstack_b[0]);
		binshiftup(binstack_b, *stack_b_size);
		*stack_a_size += 1;
		*stack_b_size -= 1;
		write(1, "pa\n", 3);
	}
}
