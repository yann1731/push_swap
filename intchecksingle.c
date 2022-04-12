/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intchecksingle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:19:57 by yst-laur          #+#    #+#             */
/*   Updated: 2022/04/11 20:19:59 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	intchecksingle(char **str)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (str[++i])
	{
		while (str[i][++j])
		{
			if (str[i][j] < '0' || str[i][j] > '9')
			{
				if (str[i][j] != '-')
					return (0);
				if (str[i][j] == '-' && (str[i][j + 1] < '0' ||
						str[i][j + 1] > '9'))
					return (0);
			}
		}
	j = -1;
	}
	return (1);
}
