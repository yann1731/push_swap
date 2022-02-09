#include "libft.h"
#include "push_swap.h"

void	sa(int *stack_a)
{
	int	ph;

	if (*stack_a == NULL || *(stack_a + 1) == NULL)
		return ;
	ph = stack_a[0];
	*(stack_a) = *(stack_a + 1);
	*(stack_a + 1) = ph;
}
