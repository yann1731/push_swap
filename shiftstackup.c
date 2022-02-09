#include "libft.h"
#include "push_swap.h"

void	shiftstackup(int *stack, int *stacksize)
{
	int stop;
	int index;

	stop = *stacksize;
	index = 0;

	while (index < stop)
	{
		*(stack + index) = *(stack + (index + 1));
		index++;
	}
}
