/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:11:25 by jimilee           #+#    #+#             */
/*   Updated: 2023/08/03 10:12:45 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	answer;

	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	i = power;
	answer = 1;
	while (i-- != 0)
		answer *= nb;
	return (answer);
}
