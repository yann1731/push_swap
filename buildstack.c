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
#include "push_swap.h"
#include "libft.h"

int	*buildstack(char *argv[], int *stack, int argc)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[++i])
		stack[j++] = ft_atoi(argv[i]);
	if (!checkdupe(stack, argc))
	{
		free(stack);
		write(2, "Error\n", 6);
		exit(1);
	}
	return (stack);
}
