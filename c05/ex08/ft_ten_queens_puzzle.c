/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:09:57 by jimilee           #+#    #+#             */
/*   Updated: 2023/08/03 10:11:52 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

int	promising(int q, int graph[])
{
	int		i;

	i = 0;
	while (i < q)
	{
		if (graph[i] == graph[q] || abs(graph[i] - graph[q]) == abs(i - q))
			return (0);
		i++;
	}
	return (1);
}

void	print_graph(int graph[])
{
	int		i;
	char	tmp;

	i = 0;
	while (i < 10)
	{
		tmp = graph[i] + 48;
		write(1, &tmp, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	queens(int q, int *cnt, int graph[])
{
	int		i;

	i = 0;
	if (q == 10)
	{
		*cnt = *cnt + 1;
		print_graph(graph);
		return ;
	}
	while (i < 10)
	{
		graph[q] = i;
		if (promising(q, graph))
			queens(q + 1, cnt, graph);
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		answer;
	int		i;
	int		graph[10];

	answer = 0;
	i = 0;
	while (i < 10)
		graph[i++] = 0;
	queens(0, &answer, graph);
	return (answer);
}
