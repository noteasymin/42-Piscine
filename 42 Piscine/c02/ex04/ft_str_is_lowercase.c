/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:27:59 by jimilee           #+#    #+#             */
/*   Updated: 2023/07/25 19:44:38 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	flag;

	flag = 1;
	while (*str != 0)
	{
		if (!(*str > 96 && *str < 123))
		{
			flag = 0;
			break ;
		}
		str++;
	}
	return (flag);
}
