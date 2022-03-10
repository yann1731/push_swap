/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buildstack_single.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:06:21 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:06:25 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

int	*buildstack_single(char *argv[], int *stack, int argc)
{
	int	i;
	int	j;

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
