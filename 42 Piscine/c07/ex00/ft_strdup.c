/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:45:35 by jimilee           #+#    #+#             */
/*   Updated: 2023/08/08 12:57:40 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*result;
	char	*temp;

	result = (char *)malloc(sizeof(char) * str_len(src) + 1);
	if (result == 0)
		return (0);
	temp = result;
	while (*src != '\0')
		*temp++ = *src++;
	*temp = 0;
	return (result);
}
