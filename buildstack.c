#include "push_swap.h"
#include "libft.h"

int *buildstack(char *argv[], int *stack, int argc)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (argv[++i])
		stack[j++] = ft_atoi(argv[i]);
	if (!checkdupe(stack, argc))
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	return (stack);
}
