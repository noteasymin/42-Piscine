/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:00:56 by jimilee           #+#    #+#             */
/*   Updated: 2023/07/26 16:08:30 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	ft_putout(int n, int *arr, int pos)
{
	int	i;

	if (pos == 1)
	{
		ft_printchar(',');
		ft_printchar(' ');
	}
	i = 0;
	while (i < n)
	{
		ft_printchar(arr[i] + '0');
		i++;
	}
}

void	ft_print_combn_up(int n, int *arr)
{
	int	i;
	int	max;

	i = n - 1;
	max = 9;
	while (arr[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	arr[i] += 1;
	while (i < n)
	{
		arr[i + 1] = arr[i] + 1;
		i += 1;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	ft_putout(n, arr, 0);
	while (arr[0] != 10 - n || arr[n - 1] != 9)
	{
		if (arr[n - 1] != 9)
		{
			arr[n - 1] += 1;
		}
		else
		{
			ft_print_combn_up(n, arr);
		}
		ft_putout(n, arr, 1);
	}
}
