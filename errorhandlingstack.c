#include "libft.h"
#include "push_swap.h"

void	errorhandlingstack(int *stack_a, int *stack_b)
{
	if (stack_a == NULL || stack_b == NULL)
	{
		free(stack_a);
		free(stack_b);
		write(2, "Error\n", 6);
		exit(0);
	}
}
