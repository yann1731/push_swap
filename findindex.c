/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findindex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:13:46 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:13:52 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

int	findindex(int *stack_a, int tofind, int stack_a_size)
{
	int	i;

	i = -1;
	while (++i < stack_a_size)
		if (stack_a[i] == tofind)
			return (i);
	return (-1);
}
