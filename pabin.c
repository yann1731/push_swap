/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pabin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:20:11 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:20:14 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	pabin(char **binstack_a, char **binstack_b)
{
	int	stack_a_size;
	int	stack_b_size;

	stack_a_size = strstack_size(binstack_a);
	stack_b_size = strstack_size(binstack_b);
	if (stack_b_size != 0)
	{
		binshiftdown(binstack_a, stack_a_size);
		ft_strcpy(binstack_a[0], binstack_b[0]);
		binshiftup(binstack_b, stack_b_size);
		write(1, "pa\n", 3);
	}
}
