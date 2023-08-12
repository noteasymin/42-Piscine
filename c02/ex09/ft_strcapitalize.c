/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimilee <jimilee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:11:21 by jimilee           #+#    #+#             */
/*   Updated: 2023/08/02 12:33:43 by jimilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_alphanumeric(char *str)
{
	if (*str >= '0' && *str <= '9')
		return (0);
	else if (*str >= 'A' && *str <= 'Z')
		return (0);
	else if (*str >= 'a' && *str <= 'z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*tmp;

	tmp = str;
	while (*tmp != '\0')
	{
		if (*tmp > 64 && *tmp < 91)
			*tmp += 32;
		tmp++;
	}
	i = 1;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] -= 32;
	while (str[i])
	{
		if (is_alphanumeric(&str[i - 1]) && ((str[i] > 96) && (str[i] < 123)))
			str[i] -= 32;
		i++;
	}
	return (str);
}
