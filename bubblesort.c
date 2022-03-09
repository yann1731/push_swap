#include "libft.h"
#include "push_swap.h"

void bubble_sort(int *to_sort, int stack_size)
{
	int j;

	j = 0;
	while (is_sorted(to_sort, stack_size) == 0)
	{
		while (j < (stack_size - 1))
		{
			if (to_sort[j] > to_sort[j + 1])
				swap(&to_sort[j], &to_sort[j + 1]);
		j++;
		}
	j = 0;
	}
}
