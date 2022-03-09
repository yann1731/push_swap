/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binshiftdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:04:32 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:04:47 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

void	binshiftdown(char **binstack, int stacksize)
{
	int index;

	index = stacksize;

	while (index > 0)
	{
		ft_strcpy(binstack[index], binstack[index - 1]);
		index--;
	}
}
