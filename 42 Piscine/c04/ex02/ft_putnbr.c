/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:32:37 by jimilee           #+#    #+#             */
/*   Updated: 2023/07/27 15:39:08 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr_ft_putchar(char c)
{
	write(1, &c, 1);
}

void	recursive(int nb)
{
	char	ch;

	if (nb == 0)
		return ;
	recursive(nb / 10);
	ch = '0' + nb % 10;
	putnbr_ft_putchar(ch);
}

void	ft_putnbr(int nb)
{
	char	ch;

	if (nb < 0)
	{
		putnbr_ft_putchar('-');
		recursive(nb / 10 * -1);
		ch = '0' - nb % 10;
	}
	else
	{
		recursive(nb / 10);
		ch = '0' + nb % 10;
	}
	putnbr_ft_putchar(ch);
}
