/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:22:44 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:22:46 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	rrb(int *stack_b, int stack_b_size)
{
	int	temp;

	temp = *(stack_b + stack_b_size);
	shiftstackdown(stack_b, stack_b_size);
	*(stack_b) = temp;
	write(1, "rrb\n", 4);
}
