#include "libft.h"
#include "push_swap.h"

char	**strstack(int *stack_a, int stack_a_size)
{
	int i;
	int	*tempstack;
	char **binstack;

	tempstack = malloc(stack_a_size * sizeof(int));
	binstack = malloc(stack_a_size * sizeof(char *));
	stack_copy(stack_a, tempstack, stack_a_size);
	bubble_sort(tempstack, stack_a_size);
	i = 0;
	while (i < stack_a_size)
	{
		binstack[findindex(stack_a, tempstack[i], stack_a_size)] = ft_itoa_bin((int) i, maxbinwidth(stack_a_size));
		i++;
	}
	free(tempstack);
	return (binstack);
}
