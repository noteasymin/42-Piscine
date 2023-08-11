/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:50:31 by jimilee           #+#    #+#             */
/*   Updated: 2023/07/25 20:00:34 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	flag;

	flag = 1;
	while (*str != 0)
	{
		if (!(*str > 31 && *str < 127))
		{
			flag = 0;
			break ;
		}
		str++;
	}
	return (flag);
}
