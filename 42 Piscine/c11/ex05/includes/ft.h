#ifndef FT_H
# define FT_H

# include <unistd.h>

void	calc(char *left, char *operator, char *right);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int	is_operator(char *c);
int	add(int left, int right);
int	sub(int left, int right);
int	mul(int left, int right);
int	div(int left, int right);
int	mod(int left, int right);
int	ft_atoi(char *str);

#endif
