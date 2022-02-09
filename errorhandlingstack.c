#include "libft.h"
#include "push_swap.h"

void	errorhandlingstack(int *stack_a, int *stack_b)
{
	if (stack_a == NULL || stack_b == NULL)
	{
		if (stack_a == NULL)
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		if (stack_b == NULL)
		{
			write(2, "Error\n", 6);
			exit(0);
		}
	}
}
