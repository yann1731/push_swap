#include "libft.h"
#include "push_swap.h"

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
