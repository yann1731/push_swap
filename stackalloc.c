#include "libft.h"
#include "push_swap.h"

int *stackalloc(int argc)
{
	int *stack;

	stack = malloc(argc * sizeof(int));
	if (stack == NULL)
		return (NULL);
	return (stack);
}
