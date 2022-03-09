#include "libft.h"
#include "push_swap.h"

void	large_sorting(char **binstack_a, char **binstack_b, int stack_a_size, int stack_b_size, int bit)
{
	int counter;
	int stop;

	counter = 0;
	stop = stack_a_size;
	while (bit > 0)
	{
		while (binstack_a[0][bit - 1] == '0')
		{
			pbbin(binstack_a, binstack_b, &stack_a_size, &stack_b_size);
			if (++counter == stop)
			{
				bit--;
				stackrewind(binstack_a, binstack_b, &stack_a_size, &stack_b_size, &counter);
			}
		}
		if (bit > 0)
			rabin(binstack_a, stack_a_size);
		if (++counter == stop)
		{
			bit--;
			stackrewind(binstack_a, binstack_b, &stack_a_size, &stack_b_size, &counter);
		}
	}
}
