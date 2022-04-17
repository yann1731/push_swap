/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:24:35 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:24:37 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	small_sort_two(t_stack stack)
{
	if (*stack.stackasize == 2)
		if (stack.stacka[0] > stack.stacka[1])
			sa(stack);
}
