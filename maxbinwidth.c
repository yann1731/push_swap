#include "libft.h"
#include "push_swap.h"

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
