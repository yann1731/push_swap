/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:18:26 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:18:30 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	large_sort(int *stack_a, int stack_a_size, int bit)
{
	char	**binstack_a;
	char	**binstack_b;
	int		i;

	i = -1;
	binstack_a = strstack(stack_a, stack_a_size);
	binstack_b = mallocbinstack(stack_a_size);
	large_sorting(binstack_a, binstack_b, bit);
	while (++i < stack_a_size)
	{
		free(binstack_a[i]);
		free(binstack_b[i]);
	}
	free(binstack_a);
	free(binstack_b);
}
