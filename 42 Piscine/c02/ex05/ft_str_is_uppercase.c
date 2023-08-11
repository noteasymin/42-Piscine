/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:46:31 by jimilee           #+#    #+#             */
/*   Updated: 2023/07/25 19:49:46 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	flag;

	flag = 1;
	while (*str != 0)
	{
		if (!(*str > 64 && *str < 91))
		{
			flag = 0;
			break ;
		}
		str++;
	}
	return (flag);
}
