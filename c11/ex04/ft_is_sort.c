/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:39:18 by jimilee           #+#    #+#             */
/*   Updated: 2023/08/09 13:42:51 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	i = 0;
	asc = 0;
	desc = 0;
	while (tab[i] < length - 1)
	{
		if (tab[i] <= tab[i + 1])
			asc += 1;
		if (tab[i] >= tab[i + 1])
			desc += 1;
		i++;
	}
	if (asc == i || desc == i)
		return (1);
	else
		return (0);
}
