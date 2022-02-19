#include "libft.h"
#include "push_swap.h"

void bubble_sort(int *sorted_stack, int stack_size)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (is_sorted(sorted_stack, stack_size) == 0)
	{
		while (j < (stack_size - 1))
		{
			if (sorted_stack[j] > sorted_stack[j + 1])
				swap(&sorted_stack[j], &sorted_stack[j + 1]);
		j++;
		}
	j = 0;
	}
}
