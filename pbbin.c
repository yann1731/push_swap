#include "libft.h"
#include "push_swap.h"

void	pbbin(char **binstack_a, char **binstack_b, int *stack_a_size, int *stack_b_size)
{
	if (*stack_a_size != 0)
	{
		binshiftdown(binstack_b, *stack_b_size);
		ft_strcpy(binstack_b[0], binstack_a[0]);
		binshiftup(binstack_a, *stack_a_size);
		*stack_b_size += 1;
		*stack_a_size -= 1;
		write(1, "pb\n", 3);
	}
}
