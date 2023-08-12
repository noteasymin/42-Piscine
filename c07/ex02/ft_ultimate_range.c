/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 22:03:16 by jimilee           #+#    #+#             */
/*   Updated: 2023/08/08 16:47:12 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_range(int min, int max)
{
	int	n;

	if (min < 0 && max < 0)
		n = (min + max) * -1;
	else if (min < 0 && max > 0)
		n = max + min * -1;
	else
		n = min + max;
	return (n);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;
	int	i;
	int	*addr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	n = ft_range(min, max);
	i = 0;
	addr = (int *)malloc(sizeof(int) * n);
	if (addr == 0)
		return (-1);
	while (min < max)
		addr[i++] = min++;
	*range = addr;
	return (i);
}
