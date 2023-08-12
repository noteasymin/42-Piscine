/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:11:39 by jimilee           #+#    #+#             */
/*   Updated: 2023/08/03 10:11:41 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;

	index = 1;
	if (nb > 0)
	{
		while (index * index <= nb)
		{
			if (index * index == nb)
				return (index);
			if (index > 46340)
				return (0);
			index++;
		}
	}
	return (0);
}
