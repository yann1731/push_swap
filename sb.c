/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:23:20 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:23:23 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sb(t_stack stack)
{
	int	tmpvalue;

	if (*stack.stackbsize < 2)
		return ;
	tmpvalue = stack.stackb[0];
	*(stack.stackb) = *(stack.stackb + 1);
	*(stack.stackb + 1) = tmpvalue;
	write(1, "sb\n", 3);
}
