#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int	maxbinwidth(int nb)
{
	int	i;

	i = 0;
	while (nb != 0)
	{
		nb /= 2;
		i++;
	}
	return (i);
}

char	**mallocbinstack(int stack_a_size)
{
	char	**binstack;
	int		maxwidth;
	int		i;

	i = -1;
	maxwidth = maxbinwidth(stack_a_size);
	binstack = malloc(stack_a_size * sizeof(char *));
	while (++i < stack_a_size)
	{
		binstack[i] = malloc((maxwidth + 1) * sizeof(char));
		ft_memset((void *) binstack[i], 0, maxwidth + 1);
	}
	return (binstack);
}

int	findindex(int *stack_a, int tofind, int stack_a_size)
{
	int	i;

	i = -1;
	while (++i < stack_a_size)
		if (stack_a[i] == tofind)
			return (i);
	return (-1);
}

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

void	ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dst[i] = src[i];
}

void	binshiftup(char **binstack, int stacksize)
{
	int stop;
	int index;
	int	maxwidth;
	int	i;

	stop = stacksize;
	index = 0;
	maxwidth = -1;
	i = -1;
	while (binstack[0][maxwidth])
		maxwidth++;
	while (index < (stop - 1))
	{
		ft_strcpy(binstack[index], binstack[index + 1]);
		index++;
	}
	while (binstack[index][++i])
		binstack[index][i] = '\0';
}

void	binshiftdown(char **binstack, int stacksize)
{
	int index;

	index = stacksize;

	while (index > 0)
	{
		ft_strcpy(binstack[index], binstack[index - 1]);
		index--;
	}
}

void	pabin(char **binstack_a, char **binstack_b, int *stack_a_size, int *stack_b_size)
{
	if (*stack_b_size != 0)
	{
		binshiftdown(binstack_a, *stack_a_size);
		ft_strcpy(binstack_a[0], binstack_b[0]);
		binshiftup(binstack_b, *stack_b_size);
		*stack_a_size += 1;
		*stack_b_size -= 1;
		write(1, "pa\n", 3);
	}
}

void	pbbin(char **binstack_a, char **binstack_b, int *stack_a_size, int *stack_b_size)
{
	if (*stack_a_size != 0)
	{
		binshiftdown(binstack_b, *stack_b_size);
		ft_strcpy(binstack_b[0], binstack_a[0]);
		binshiftup(binstack_a, *stack_a_size);
		*stack_b_size += 1;
		*stack_a_size -= 1;
		write(1, "pb\n", 3);
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

void	rabin(char **stack_a, int stack_a_size)
{
	char *temp;

	temp = ft_strdup(stack_a[0]);
	binshiftup(stack_a, stack_a_size);
	ft_strcpy(stack_a[stack_a_size - 1], temp);
	free(temp);
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
	*(stack_a + (stack_a_size)) = 0;
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

int	memsizebin(unsigned long long n)
{
	long long	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n /= 2;
	}
	return (i);
}

static char	*posnumbin(unsigned long long n, char *str, int maxwidth)
{
	const char	*base;

	base = "01";
	str[maxwidth] = '\0';
	while (maxwidth > 0)
	{
		str[maxwidth - 1] = base[n % 2];
		n = n / 2;
		maxwidth--;
	}
	return (str);
}

char	*ft_itoa_bin(unsigned long long n, int maxwidth)
{
	char	*str;

	if (n == 0)
	{
		str = malloc((maxwidth + 1) * sizeof(char));
		str[maxwidth] = '\0';
		while (maxwidth > 0)
		{
			str[maxwidth - 1] = '0';
			maxwidth--; 
		}
		return (str);
	}
	str = malloc((maxwidth + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	else
		str = posnumbin(n, str, maxwidth);
	return (str);
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
		{
			if (str[i][j] < '0' || str[i][j] > '9')
			{
				if (str[i][j] != '-' && (str[i][j + 1] < '0' || str[i][j + 1] > '9'))
					return (0);
			}
		}
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
	char	**str;

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

void	small_sort_two(int *stack_a, int stack_a_size)
{
	if (stack_a_size == 2)
		if (stack_a[0] > stack_a[1])
			sa(stack_a, stack_a_size);
}

void	small_sort(int *stack_a, int stack_a_size)
{
	if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2] && stack_a[0] < stack_a[2])
		sa(stack_a, stack_a_size);
	if (is_rsorted(stack_a, stack_a_size) == 1)
	{
		sa(stack_a, stack_a_size);
		rra(stack_a, stack_a_size);
	}
	if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2] && stack_a[0] > stack_a[2])
		ra(stack_a, stack_a_size);
	if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2] && stack_a[0] < stack_a[2])
	{
		sa(stack_a, stack_a_size);
		ra(stack_a, stack_a_size);
	}
	if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2] && stack_a[0] > stack_a[2])
		rra(stack_a, stack_a_size);
}

void	stack_copy(int *to_copy, int *copy_to, int to_copy_size)
{
	while (--to_copy_size >= 0)
		copy_to[to_copy_size] = to_copy[to_copy_size];
}

void	insert_second(int *stack_a, int *stack_b, int *stack_a_size, int *stack_b_size, int *tempstack)
{
		pa(stack_a, stack_b, stack_a_size, stack_b_size);
		if (stack_a[1] == tempstack[0])
			sa(stack_a, *stack_a_size);
}

void	insert_mid(int *stack_a, int *stack_b,	int *stack_a_size, int *stack_b_size, int *tempstack)
{
	if (stack_a[0] == tempstack[0] && stack_a[1] == tempstack[1])
	{
		ra(stack_a, *stack_a_size);
		pa(stack_a, stack_b, stack_a_size, stack_b_size);
		sa(stack_a, *stack_a_size);
		rra(stack_a, *stack_a_size);
	}
	else
	{
		ra(stack_a, *stack_a_size);
		pa(stack_a, stack_b, stack_a_size, stack_b_size);
		rra(stack_a, *stack_a_size);
	}
}

void	insert_sec_to_last(int *stack_a, int *stack_b, int *stack_a_size, int *stack_b_size, int *tempstack)
{
	if (stack_a[*(stack_a_size) - 1] == tempstack[4])
	{
		rra(stack_a, *stack_a_size);
		pa(stack_a, stack_b, stack_a_size, stack_b_size);
		ra(stack_a, *stack_a_size);
		ra(stack_a, *stack_a_size);
	}
	else
	{
		pa(stack_a, stack_b, stack_a_size, stack_b_size);
		ra(stack_a, *stack_a_size);
	}
}

void	insert_max(int *stack_a, int *stack_b, int *stack_a_size, int *stack_b_size)
{
	pa(stack_a, stack_b, stack_a_size, stack_b_size);
	ra(stack_a, *stack_a_size);
}

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

void	stackrewind(char **binstack_a, char **binstack_b, int *stack_a_size, int *stack_b_size, int *counter)
{
	*counter = 0;
	while (*stack_b_size > 0)
		pabin(binstack_a, binstack_b, stack_a_size, stack_b_size);
}

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

void	large_sort(int *stack_a, int stack_a_size, int stack_b_size, int bit)
{
	char	**binstack_a;
	char	**binstack_b;
	int		i;

	i = -1;
	binstack_a = strstack(stack_a, stack_a_size);
	binstack_b = mallocbinstack(stack_a_size);
	large_sorting(binstack_a, binstack_b, stack_a_size, stack_b_size, bit);
	while (++i < (stack_a_size + 1))
	{
		free(binstack_a[i]);
		free(binstack_b[i]);
	}
	free(binstack_a);
	free(binstack_b);
}

void	small_sort_five(int *stack_a, int *stack_b, int stack_a_size, int stack_b_size)
{
	int	*tempstack;

	tempstack = malloc(stack_a_size * sizeof(int));
	stack_copy(stack_a, tempstack, stack_a_size);
	bubble_sort(tempstack, stack_a_size);
	pb(stack_a, stack_b, &stack_a_size, &stack_b_size);
	pb(stack_a, stack_b, &stack_a_size, &stack_b_size);
	small_sort(stack_a, stack_a_size);
	while (is_sorted(stack_a, stack_a_size) == 0 || stack_b_size != 0)
	{
		if (stack_b[0] == tempstack[0])
			pa(stack_a, stack_b, &stack_a_size, &stack_b_size);
		if (stack_b[0] == tempstack[1])
			insert_second(stack_a, stack_b, &stack_a_size, &stack_b_size, tempstack);
		if (stack_b[0] == tempstack[2])
			insert_mid(stack_a, stack_b, &stack_a_size, &stack_b_size, tempstack);
		if (stack_b[0] == tempstack[3])
			insert_sec_to_last(stack_a, stack_b, &stack_a_size, &stack_b_size, tempstack);
		if (stack_b[0] == tempstack[4])
			insert_max(stack_a, stack_b, &stack_a_size, &stack_b_size);
	}
}

void	small_sort_four(int *stack_a, int *stack_b, int stack_a_size, int stack_b_size)
{
	pb(stack_a, stack_b, &stack_a_size, &stack_b_size);
	small_sort(stack_a, stack_a_size);
	if (stack_b[0] < stack_a[0])
		pa(stack_a, stack_b, &stack_a_size, &stack_b_size);
	if (stack_b[0] > stack_a[2])
	{
		pa(stack_a, stack_b, &stack_a_size, &stack_b_size);
		ra(stack_a, stack_a_size);
	}
	if ((stack_b[0] > stack_a[0] && stack_b[0] < stack_a[1])
		|| (stack_b[0] > stack_a[0] && stack_b[0] < stack_a[1]))
	{
		pa(stack_a, stack_b, &stack_a_size, &stack_b_size);
		sa(stack_a, stack_a_size);
	}
	if (stack_b[0] > stack_a[1] && stack_b[0] < stack_a[2])
	{
		rra(stack_a, stack_a_size);
		pa(stack_a, stack_b, &stack_a_size, &stack_b_size);
		ra(stack_a, stack_a_size);
		ra(stack_a, stack_a_size);
	}
}

void	sorting(int *stack_a, int *stack_b, int stack_a_size, int stack_b_size)
{
	int	maxwidth;

	maxwidth = maxbinwidth(stack_a_size);
	if (stack_a_size == 2)
		small_sort_two(stack_a, stack_a_size);
	if (stack_a_size == 3)
		small_sort(stack_a, stack_a_size);
	if (stack_a_size == 4)
		small_sort_four(stack_a, stack_b, stack_a_size, stack_b_size);
	if (stack_a_size == 5)
		small_sort_five(stack_a, stack_b, stack_a_size, stack_b_size);
	if (stack_a_size > 5)
		large_sort(stack_a, stack_a_size, stack_b_size, maxwidth);
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
	free(stack_a);
	free(stack_b);
	return (0);
}