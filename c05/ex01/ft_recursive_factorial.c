/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:11:19 by jimilee           #+#    #+#             */
/*   Updated: 2023/08/03 14:58:05 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	answer;

	if (nb < 0)
		return (0);
	answer = 0;
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
