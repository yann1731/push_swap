#include "libft.h"
#include "push_swap.h"

char	**handle_single_string(char *argv[], int *argc)
{
	char	**str;

	str = ft_split(argv[1], ' ');
	errorhandlingint(str);
	*argc = argcount(str);
	return (str);
}
