#include "libft.h"
#include "push_swap.h"

void	insert_second(int *stack_a, int *stack_b, int *stack_a_size, int *stack_b_size, int *tempstack)
{
		pa(stack_a, stack_b, stack_a_size, stack_b_size);
		if (stack_a[1] == tempstack[0])
			sa(stack_a, *stack_a_size);
}