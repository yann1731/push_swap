/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorhandlingintsingle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:19:35 by yst-laur          #+#    #+#             */
/*   Updated: 2022/04/11 20:19:38 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	errorhandlingintsingle(char *argv[])
{
	if (intchecksingle(argv) == 0)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}
