/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:44:35 by jimilee           #+#    #+#             */
/*   Updated: 2023/08/07 19:52:45 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	convert(long long nbr, int i, char *arr, char *base)
{
	int	base_len;

	base_len = 0;
	if (nbr < 0)
	{
		nbr *= -1;
	}
	while (base[base_len] != '\0')
		base_len++;
	if (nbr >= base_len)
	{
		i = convert(nbr / base_len, i, arr, base);
		arr[i] = base[nbr % base_len];
	}
	else
		arr[i] = base[nbr];
	return (i + 1);
}

void	ft_putnbr_base(int nbr, char *arr, char *base)
{
	int			i;
	int			base_len;
	long long	num;

	i = 0;
	base_len = 0;
	if (nbr < 0)
	{
		arr[i] = '-';
		num = nbr * -1;
		i++;
	}
	num = nbr;
	i = convert(num, i, arr, base);
	arr[i] = '\0';
}

int	ft_base(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi(char *str, char *base)
{
	int	sign;
	int	answer;
	int	l;
	int	i;

	sign = 1;
	answer = 0;
	l = 0;
	i = 0;
	while (base[l] != '\0')
		l++;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i])
	{
		if (ft_base(str[i], base) == -1)
			break ;
		else
			answer = answer * l + ft_base(str[i], base);
		i++;
	}
	return (answer * sign);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ' || base[i] > 126)
			return (1);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
			if (base[i] == base[j++])
				return (1);
		i++;
	}
	if (i <= 1)
		return (1);
	return (0);
}
