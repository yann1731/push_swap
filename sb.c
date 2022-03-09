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
#include "libft.h"
#include "push_swap.h"

void	sb(int *stack_b, int stack_b_size)
{
	int	tmpvalue;

	if (stack_b_size < 2)
		return ;
	tmpvalue = stack_b[0];
	*(stack_b) = *(stack_b + 1);
	*(stack_b + 1) = tmpvalue;
	write(1, "sb\n", 3);
}
