/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:03:16 by jimilee           #+#    #+#             */
/*   Updated: 2023/07/22 11:57:41 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print(int x, int y, int width, int height);

void	rush(int x, int y)
{
	int	height;
	int	width;

	if (x < 1 || y < 1)
	{
		return ;
	}
	height = 1;
	width = 1;
	print(x, y, width, height);
}

void	print(int x, int y, int width, int height)
{
	while (height <= y)
	{
		width = 1;
		while (width <= x)
		{
			if ((width > 1 && width < x) && (height > 1 && height < y))
				ft_putchar(' ');
			else if ((width > 1 && width < x) && (height == 1 || height == y))
				ft_putchar('-');
			else if ((height > 1 && height < y) && (width == 1 || width == x))
				ft_putchar('|');
			else
				ft_putchar('o');
			width += 1;
		}
		ft_putchar('\n');
		height += 1;
	}
}
