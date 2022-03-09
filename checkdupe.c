/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkdupe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:06:33 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:06:38 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

int	checkdupe(int *stack, int argc)
{
	int	i;
	int	j;

	j = 0;
	i = j + 1;
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
