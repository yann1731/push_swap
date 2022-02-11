#include <stdio.h>
#include "push_swap.h"
#include "libft.h"

int main(int argc, char *argv[])
{
	int *stack_a;
	int	*stack_b;

	errorhandlingint(argv);
	stack_a = malloc((argc - 1) * sizeof(int));
	stack_b = malloc((argc - 1) * sizeof(int));
	errorhandlingstack(stack_a, stack_b);
	stack_a = buildstack(argv, stack_a, argc);
	push_swap(stack_a, stack_b, argc);

	return (0);
}
