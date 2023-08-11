/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:04:18 by jimilee           #+#    #+#             */
/*   Updated: 2023/07/24 16:41:28 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print('0' + a / 10);
			ft_print('0' + a % 10);
			ft_print(' ');
			ft_print('0' + b / 10);
			ft_print('0' + b % 10);
			if (a < 98)
			{
				ft_print(',');
				ft_print(' ');
			}
			b += 1;
		}	
		a += 1;
	}
}
