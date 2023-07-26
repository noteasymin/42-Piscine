/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:10:36 by jimilee           #+#    #+#             */
/*   Updated: 2023/07/24 15:36:05 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recursive(int nb)
{
	char	ch;

	if (nb == 0)
		return ;
	recursive(nb / 10);
	ch = '0' + nb % 10;
	write(1, &ch, 1);
}

void	ft_putnbr(int nb)
{
	char	ch;

	if (nb < 0)
	{
		write(1, "-", 1);
		recursive(nb / 10 * -1);
		ch = '0' - nb % 10;
	}
	else
	{
		recursive(nb / 10);
		ch = '0' + nb % 10;
	}
	write(1, &ch, 1);
}
