#include "libft.h"
#include "push_swap.h"

void	rb(int *stack_b, int *stack_b_size)
{
	int temp;

	temp = *stack_b;
	shiftstackup(stack_b, stack_b_size);
	*(stack_b + *stack_b_size) = temp;
}
