/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shiftstackup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:23:44 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:23:48 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

void	shiftstackup(int *stack, int stacksize)
{
	int	stop;
	int	index;

	stop = stacksize;
	index = 0;
	while (index < stop)
	{
		*(stack + index) = *(stack + (index + 1));
		index++;
	}
}
