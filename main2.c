#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int	checkdupe(int *stack, int argc)
{
	int i;
	int j;

	j = 0;
	i =  j + 1;
	while (j < argc)
	{
		while (i < (argc - 1))
		{
			if (stack[i] == stack[j])
				return (0);
			i++;
		}
	j++;
	i = j + 1;
	}
	return (1);
}

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

int	intcheck(char **str)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while (str[++i])
	{
		while (str[i][++j])
			if (str[i][j] < '0' || str[i][j] > '9')
				return (0);
	j = -1;
	}
	return (1);
}

void	errorhandlingint(char *argv[])
{
	if (intcheck(argv) == 0)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
}

void	errorhandlingstack(int *stack_a, int *stack_b)
{
	if (stack_a == NULL || stack_b == NULL)
	{
		if (stack_a == NULL)
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		if (stack_b == NULL)
		{
			write(2, "Error\n", 6);
			exit(0);
		}
	}
}

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

void	push_swap(int *stack_a, int *stack_b, int argc)
{
	int stack_a_size;
	int stack_b_size;

	stack_a_size = argc - 1;
	stack_b_size = 0;
}

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
