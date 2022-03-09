#include "libft.h"
#include "push_swap.h"

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
