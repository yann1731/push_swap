/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorhandlingstack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:13:33 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:13:36 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	errorhandlingstack(t_stack stack)
{
	if (stack.stacka == NULL || stack.stackb == NULL)
	{
		free(stack.stacka);
		free(stack.stackb);
		write(2, "Error\n", 6);
		exit(1);
	}
}
