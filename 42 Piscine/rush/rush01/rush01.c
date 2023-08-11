/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:23:54 by hyehan            #+#    #+#             */
/*   Updated: 2023/07/22 17:39:53 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putchar(char c);
void	ft_print_error_msg(void);
void	ft_print_words1(int x, char a, char b);
void	ft_print_words2(int x, char a, char b, char c);

void	rush(int x, int y)
{
	int	i;
	// /*\
	// * *
	// \*/
	i = 0;
	if(x < 0 || y < 0)
	{
		ft_print_error_msg();
		return ;
	}
	while (i < x)
	{
		printf("(%d)", i);
		if(i == 0)
			ft_print_words2(x, '/', '*','\\');
		else if(i < x - 1)
			ft_print_words1(x, '*', ' ');
		else
			ft_print_words2(x,'\\', '*', '/'); 
		ft_putchar('\n');
		i++;
	}
}

void	ft_print_error_msg(void)
{
	char	error_msg[6];
	int		i;

	i = 0;
	error_msg[0] = 'E';
	error_msg[1] = 'R';
	error_msg[2] = 'R';
	error_msg[3] = 'O';
	error_msg[4] = 'R';
	while(error_msg[i])
	{
		ft_putchar(error_msg[i]);
		i++;
	}
}

void	ft_print_words1(int x, char a, char b)
{
	int	i;

	i = 0;
	while (i < x)
	{
		printf("%d", i);
		if (i == 0 || i == x - 1)
			ft_putchar(a);
		else
			ft_putchar(b);
		i++;
	}
}

void	ft_print_words2(int x, char a, char b, char c)
{
	int i;

	i = 0;
	while (i < x)
	{
		printf("(%d)", x);
		if (i == 0)
			ft_putchar(a);
		else if (i < x - 1)
			ft_putchar(b);
		else
			ft_putchar(c);
		i++;
	}
}
