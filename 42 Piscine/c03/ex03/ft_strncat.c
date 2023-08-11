/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:47:05 by jimilee           #+#    #+#             */
/*   Updated: 2023/07/27 15:25:25 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	int				j;
	unsigned int	size;

	i = 0;
	j = 0;
	size = 0;
	while (dest[i])
		i++;
	while (src[j] != 0 && size < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
		size++;
	}
	dest[i] = 0;
	return (dest);
}
