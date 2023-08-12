/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:59:08 by jimilee           #+#    #+#             */
/*   Updated: 2023/08/03 10:50:03 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	range(int min, int max)
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

int	*ft_range(int min, int max)
{
	int	n;
	int	i;
	int	*result;

	if (min >= max)
		return (0);
	else
		n = range(min, max);
	result = (int *)malloc(sizeof(int) * n);
	if (result == 0)
		return (0);
	i = 0;
	while (n-- > 0)
		result[i++] = min++;
	return (result);
}
