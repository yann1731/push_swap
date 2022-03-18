/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shiftstackdown.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:23:33 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:23:36 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include "push_swap.h"

void	shiftstackdown(int *stack, int stacksize)
{
	int	index;

	index = stacksize;
	while (index > 0)
	{
		*(stack + index) = *(stack + (index - 1));
		index--;
	}
}
