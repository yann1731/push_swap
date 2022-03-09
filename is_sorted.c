/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:17:43 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:17:51 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

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
