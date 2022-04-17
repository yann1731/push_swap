/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:23:07 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:23:10 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sa(t_stack stack)
{
	int	tmpvalue;

	if (*stack.stackasize < 2)
		return ;
	tmpvalue = stack.stacka[0];
	*(stack.stacka) = *(stack.stacka + 1);
	*(stack.stacka + 1) = tmpvalue;
	write(1, "sa\n", 3);
}
