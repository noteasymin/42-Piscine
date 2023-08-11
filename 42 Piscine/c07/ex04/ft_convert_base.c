/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:28:43 by jimilee           #+#    #+#             */
/*   Updated: 2023/08/08 16:48:30 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		convert(long long nbr, int i, char *arr, char *base);
void	ft_putnbr_base(int nbr, char *arr, char *base);
int		ft_base(char str, char *base);
int		ft_atoi(char *str, char *base);
int		check_base(char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	num;
	int			size;
	char		*arr;
	int			m_size;
	int			temp_num;

	if (check_base(base_from) || check_base(base_to))
		return (0);
	num = ft_atoi(nbr, base_from);
	size = 0;
	while (base_to[size] != '\0')
		size++;
	temp_num = num;
	m_size = 0;
	while (temp_num != 0)
	{
		m_size++;
		temp_num /= size;
	}
	arr = (char *)malloc(sizeof(char) * (m_size + 1));
	ft_putnbr_base(num, arr, base_to);
	return (arr);
}
