/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:12:02 by jimilee           #+#    #+#             */
/*   Updated: 2023/08/09 22:51:42 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

int	check(char *left, char *right, int oper, int *nbr)
{
	nbr[0] = ft_atoi(left);
	nbr[1] = ft_atoi(right);
	if(nbr[1] == 0 && (oper == 3 || oper == 4))
	{
		if (oper == 3)
			ft_putstr("Stop : division by zero");
		else
			ft_putstr("Stop : modulo by zero");
		return (0);
	}
	else
		return (1);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	answer;
	int	i;

	sign = 1;
	answer = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] >= '0' && str[i] <= '9')
		answer = answer * 10 + str[i++] - '0';
	return (answer * sign);
}

int	is_operator(char *c)
{
	int	i;
	char operators[5];

	i = 0;
	operators[0] = '+';
	operators[1] = '-';
	operators[2] = '*';
	operators[3] = '/';
	operators[4] = '%';
	while (i < 5)
	{
		if (c[0] == operators[i] && c[1] == '\0')
			return (i);
		i++;
	}
	return (-1);
}

void	calc(char *left, char *operator, char *right)
{
	int	(*op[5])(int, int);
	int	oper;
	int	nbr[2];

	op[0] = add;
	op[1] = sub;
	op[2] = mul;
	op[3] = div;
	op[4] = mod;
	if ((oper = is_operator(operator)) != -1)
	{
		if (check(left, right, oper, nbr) != 0)
			ft_putnbr(op[oper](nbr[0], nbr[1]));
		ft_putchar('\n');
	}
	else
	{
		ft_putnbr(0);
		ft_putchar('\n');
	}
}
