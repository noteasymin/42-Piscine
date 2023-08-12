/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:04:55 by jimilee           #+#    #+#             */
/*   Updated: 2023/08/02 12:39:32 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cnt;
	char			*tmp;

	cnt = 0;
	tmp = dest;
	while (cnt < n && *src != '\0')
	{
		*tmp++ = *src++;
		cnt++;
	}
	while (cnt < n)
	{
		*tmp++ = '\0';
		cnt++;
	}
	return (dest);
}
