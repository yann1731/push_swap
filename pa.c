/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:19:58 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:20:01 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	pa(t_stack stack)
{
	if (*stack.stackbsize != 0)
	{
		shiftstackdown(stack.stacka, *stack.stackasize);
		*stack.stacka = *stack.stackb;
		shiftstackup(stack.stackb, *stack.stackbsize);
		*stack.stackasize += 1;
		*stack.stackbsize -= 1;
	}
	write(1, "pa\n", 3);
}
