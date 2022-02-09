#include "libft.h"
#include "push_swap.h"

void	sb(int *stack_b)
{
	int	ph;

	if (*stack_b == NULL || *(stack_b + 1) == NULL)
		return ;
	ph = stack_b[0];
	*(stack_b) = *(stack_b + 1);
	*(stack_b + 1) = ph;
}
