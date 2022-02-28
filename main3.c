#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

void	shiftstackdown(int *stack, int stacksize)
{
	int index;

	index = stacksize;

	while (index > 0)
	{
		*(stack + index) = *(stack + (index - 1));
		index--;
	}
}

void	shiftstackup(int *stack, int stacksize)
{
	int stop;
	int index;

	stop = stacksize;
	index = 0;

	while (index < stop)
	{
		*(stack + index) = *(stack + (index + 1));
		index++;
	}
}

void	pa(int *stack_a, int *stack_b, int *stack_a_size, int *stack_b_size)
{
	if (*stack_b_size != 0)
	{
		shiftstackdown(stack_a, *stack_a_size);
		*stack_a = *stack_b;
		shiftstackup(stack_b, *stack_b_size);
		*stack_a_size += 1;
		*stack_b_size -= 1;
		write(1, "pa\n", 3);
	}
}

void	pb(int *stack_a, int *stack_b, int *stack_a_size, int *stack_b_size)
{
	if (*stack_a_size != 0)
	{
		shiftstackdown(stack_b, *stack_b_size);
		*stack_b = *stack_a;
		shiftstackup(stack_a, *stack_a_size);
		*stack_b_size += 1;
		*stack_a_size -= 1;
		write(1, "pb\n", 3);
	}
}

void	ra(int *stack_a, int stack_a_size)
{
	int temp;

	temp = *stack_a;
	shiftstackup(stack_a, stack_a_size);
	*(stack_a + (stack_a_size - 1)) = temp;
	write(1, "ra\n", 3);
}

void	rb(int *stack_b, int stack_b_size)
{
	int temp;

	temp = *stack_b;
	shiftstackup(stack_b, stack_b_size);
	*(stack_b + (stack_b_size - 1)) = temp;
	write(1, "rb\n", 3);
}

void	rr(int *stack_a, int *stack_b, int stack_a_size, int stack_b_size)
{
	ra(stack_a, stack_a_size);
	rb(stack_b, stack_b_size);
	write(1, "rr\n", 3);
}

void	rra(int *stack_a, int stack_a_size)
{
	int temp;

	temp = *(stack_a + (stack_a_size - 1));
	shiftstackdown(stack_a, stack_a_size);
	*(stack_a) = temp;
	write(1, "rra\n", 4);
}

void	rrb(int *stack_b, int stack_b_size)
{
	int temp;

	temp = *(stack_b + stack_b_size);
	shiftstackdown(stack_b, stack_b_size);
	*(stack_b) = temp;
	write(1, "rrb\n", 4);
}

void	rrr(int *stack_a, int *stack_b, int stack_a_size, int stack_b_size)
{
	rra(stack_a, stack_a_size);
	rrb(stack_b, stack_b_size);
	write(1, "rrr\n", 4);
}

void	sa(int *stack_a, int stack_a_size)
{
	int	tmpvalue;

	if (stack_a_size < 2)
		return ;
	tmpvalue = stack_a[0];
	*(stack_a) = *(stack_a + 1);
	*(stack_a + 1) = tmpvalue;
	write(1, "sa\n", 3);
}

void	sb(int *stack_b, int stack_b_size)
{
	int	tmpvalue;

	if (stack_b_size < 2)
		return ;
	tmpvalue = stack_b[0];
	*(stack_b) = *(stack_b + 1);
	*(stack_b + 1) = tmpvalue;
	write(1, "sb\n", 3);
}

void	ss(int *stack_a, int *stack_b, int stack_a_size, int stack_b_size)
{
	sa(stack_a, stack_a_size);
	sb(stack_b, stack_b_size);
	write(1, "ss\n", 3);
}

int	is_sorted(int *stack_a, int stack_a_size)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while (j < stack_a_size)
	{
		if (stack_a[i] > stack_a[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}

int	is_rsorted(int *stack_b, int stack_b_size)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	if (stack_b_size < 2)
		return (0);
	while (j < stack_b_size)
	{
		if (stack_b[i] < stack_b[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}

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
		free(stack);
		write(2, "Error\n", 6);
		exit(0);
	}
	return (stack);
}

int *buildstack_single(char *argv[], int *stack, int argc)
{
	int i;
	int j;

	i = -1;
	j = 0;
	while (argv[++i])
		stack[j++] = ft_atoi(argv[i]);
	if (!checkdupe(stack, argc))
	{
		free(stack);
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
		free(stack_a);
		free(stack_b);
		write(2, "Error\n", 6);
		exit(0);
	}
}

int	argcount(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i + 1);
}

char	**handle_single_string(char *argv[], int *argc)
{
	char **str;
	int	i;

	i = -1;
	str = ft_split(argv[1], ' ');
	errorhandlingint(str);
	*argc = argcount(str);
	return (str);
}

void swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

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

void	small_sort(int *stack_a, int *stack_b, int stack_a_size, int stack_b_size)
{
	if (stack_a_size == 2)
		if (stack_a[0] > stack_a[1])
			sa(stack_a, stack_a_size);
	if (stack_a_size == 3)
	{
		if (stack_a[0] > stack_a[1] && stack_a[2] > stack_a[1])
			sa(stack_a, stack_a_size);
		if (is_rsorted(stack_a, stack_a_size) == 1)
		{
			sa(stack_a, stack_a_size);
			rra(stack_a, stack_a_size);
		}
		if (stack_a[0] > stack_a[1] && stack_a[0] > stack_a[2])
			ra(stack_a, stack_a_size);
		if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2])
		{
			sa(stack_a, stack_a_size);
			ra(stack_a, stack_a_size);
		}
		if (stack_a[0] < stack_a[1] && stack_a[0] > stack_a[2])
			rra(stack_a, stack_a_size);
	}
}

//a: 4 1 3 2 5
//a: 3 2 5 b: 1 4
//a: 2 3 5 b: 1 4
//a: 1 2 3 5 b: 4
//a: 5 1 2 3 b: 4
//a: 4 5 1 2 3
//a: ra ra

int	find_max(int *stack_a, int stack_a_size)
{
	int res;

	res = 0;
	while (--stack_a_size >= 0)
		if (stack_a[stack_a_size] > res)
			res = stack_a[stack_a_size];
	return (res);
}

int	find_min(int *stack_a, int stack_a_size)
{
	int res;

	res = stack_a[stack_a_size - 1];
	while (--stack_a_size >= 0)
		if (stack_a[stack_a_size] < res)
			res = stack_a[stack_a_size];
	return (res);
}

void	small_sort_five(int *stack_a, int *stack_b, int stack_a_size, int stack_b_size)
{
	int max;

	max = find_max(stack_a, stack_a_size);
	if (stack_a_size == 5)
		pb(stack_a, stack_b, &stack_a_size, &stack_b_size);
	pb(stack_a, stack_b, &stack_a_size, &stack_b_size);
	small_sort(stack_a, stack_b, stack_a_size, stack_b_size);
	while (is_sorted(stack_a, stack_a_size) == 0 || stack_b_size != 0)
	{
		if (stack_b[0] < stack_a[0])
			pa(stack_a, stack_b, &stack_a_size, &stack_b_size);
		if (stack_b[0] > stack_a[0] && stack_b[0] != max)
		{
			while (stack_b[0] > stack_a[0])
				rra(stack_a, stack_a_size);
			pa(stack_a, stack_b, &stack_a_size, &stack_b_size);
		}
		if (stack_b[0] == max)

		while (is_sorted(stack_a, stack_a_size) != 1)
			ra(stack_a, stack_a_size);
	}
}

int	findindex(int *stack_a, int tofind, int stack_a_size)
{
	int	i;

	i = -1;
	while (++i < stack_a_size)
		if (stack_a[i] == tofind)
			return (i);
	return (0);
}

void	sorting(int *stack_a, int *stack_b, int stack_a_size, int stack_b_size)
{
	if (stack_a_size <= 3)
		small_sort(stack_a, stack_b, stack_a_size, stack_b_size);
	if (stack_a_size == 4 || stack_a_size == 5)
		small_sort_five(stack_a, stack_b, stack_a_size, stack_b_size);
}

void	push_swap(int *stack_a, int *stack_b, int argc)
{
	int stack_a_size;
	int stack_b_size;

	stack_a_size = argc - 1;
	stack_b_size = 0;
	sorting(stack_a, stack_b, stack_a_size, stack_b_size);
}

int main(int argc, char *argv[])
{
	int 	*stack_a;
	int		*stack_b;
	char	**str;

	if (argc == 1)
		exit(0);
	if (argc > 2)
	{
		stack_a = malloc((argc - 1) * sizeof(int));
		stack_a = buildstack(argv, stack_a, argc);
	}
	if (argc == 2)
	{
		argv = handle_single_string(argv, &argc);
		stack_a = malloc((argc - 1) * sizeof(int));
		stack_a = buildstack_single(argv, stack_a, argc);
	}
	errorhandlingint(argv);
	stack_b = malloc((argc - 1) * sizeof(int));
	errorhandlingstack(stack_a, stack_b);
	push_swap(stack_a, stack_b, argc);
	return (0);
}
