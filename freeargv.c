#include "libft.h"
#include "push_swap.h"

void	freeargv(char **argv)
{
	int	i;

	i = -1;
	while (argv[++i])
		free(argv[i]);
	free(argv);
}
