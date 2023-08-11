int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	end;
	char 	*temp;

	end = 0;
	while (end == 0)
	{
		end = 1;
		i = 0;
		while (tab[i++ + 1])
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				end = 0;
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
		}
	}
}
