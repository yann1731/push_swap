/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intcheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:16:59 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:17:10 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include "push_swap.h"

int	intcheck(char **str)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (str[++i])
	{
		while (str[i][++j])
		{
			if (str[i][j] < '0' || str[i][j] > '9')
			{
				if (str[i][j] != '-' && (str[i][j + 1] < '0'
					|| str[i][j + 1] > '9'))
					return (0);
			}
		}
	j = -1;
	}
	return (1);
}
