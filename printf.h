#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>


void		ft_printf(const char *format, ...);
void	ft_putnbr(int nb);
void	ft_putnbr_u(unsigned int nb);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr_base(unsigned int nbr, char Xx);
void	ft_putaddr(void *addr);

#endif