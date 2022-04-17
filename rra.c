/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:22:36 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:22:39 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	rra(t_stack stack)
{
	int	temp;

	temp = *(stack.stacka + (*stack.stackasize - 1));
	shiftstackdown(stack.stacka, *stack.stackasize);
	*(stack.stacka) = temp;
	write(1, "rra\n", 4);
}
