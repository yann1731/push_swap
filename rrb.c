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

void	rrb(t_stack stack)
{
	int	temp;

	temp = *(stack.stackb + *stack.stackbsize);
	shiftstackdown(stack.stackb, *stack.stackbsize);
	*(stack.stackb) = temp;
	write(1, "rrb\n", 4);
}
