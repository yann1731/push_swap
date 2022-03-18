/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buildstack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:06:08 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:06:12 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include "push_swap.h"

int	*buildstack(char *argv[], int *stack, int argc)
{
	int			i;
	int			j;
	long long	res;

	i = 0;
	j = 0;
	while (argv[++i])
	{
		res = ft_atoi(argv[i]);
		if (res < -2147483648 || res > 2147483647)
		{
			free(stack);
			write(2, "Error\n", 6);
			exit(1);
		}
		stack[j++] = res;
	}
	if (!checkdupe(stack, argc))
	{
		free(stack);
		write(2, "Error\n", 6);
		exit(1);
	}
	return (stack);
}
