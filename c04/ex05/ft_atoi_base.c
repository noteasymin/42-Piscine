/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 21:20:35 by jimilee           #+#    #+#             */
/*   Updated: 2023/08/03 12:26:30 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_duplicate_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || check_duplicate_base(base))
			return (0);
		else if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		i++;
	}
	return (1);
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
	int	i;
	int	answer;
	int	l;

	l = 0;
	while (base[l] != '\0')
		l++;
	answer = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i])
	{
		if (ft_base(str[i], base) == -1)
			break ;
		answer *= l;
		answer += ft_base(str[i], base);
		i++;
	}
	return (answer * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	answer;
	int	i;

	if (*base == '\0' || base[1] == '\0')
		return (0);
	answer = 0;
	i = 0;
	sign = 1;
	if (check_base(base) == 1)
		answer = ft_atoi(str, base);
	return (answer);
}
