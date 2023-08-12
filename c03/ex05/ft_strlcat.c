/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:25:54 by jimilee           #+#    #+#             */
/*   Updated: 2023/07/31 22:06:44 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	cat_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	i;

	dest_size = cat_strlen(dest);
	src_size = cat_strlen(src);
	i = 0;
	while (src[i] && (dest_size + i + 1) < size)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = 0;
	if (dest_size >= size)
		return (src_size + size);
	else
		return (dest_size + src_size);
}
