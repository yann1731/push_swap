/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:20:25 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:20:28 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	pb(t_stack stack)
{
	if (*stack.stackasize != 0)
	{
		shiftstackdown(stack.stackb, *stack.stackbsize);
		*stack.stackb = *stack.stacka;
		shiftstackup(stack.stacka, *stack.stackasize);
		*stack.stackbsize += 1;
		*stack.stackasize -= 1;
	}
	write(1, "pb\n", 3);
}
