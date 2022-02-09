#include "libft.h"
#include "push_swap.h"

void	shiftstackdown(int *stack, int *stacksize)
{
	int index;

	index = *stacksize;

	while (index > 0)
	{
		*(stack + index) = *(stack + (index - 1));
		index--;
	}
	*(stack + index) = 0;
}
