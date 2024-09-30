/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:09:14 by mohben-t          #+#    #+#             */
/*   Updated: 2024/09/28 16:09:14 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

void	ft_putnbr_base_add(unsigned long int nb, char c)
{
	char *base;
	unsigned long int base_len;

	base_len = 16;
	if (c == 'x')
		base = "0123456789abcdef";
	if (nb < base_len)
	{
		ft_putchar(base[nb]);
	}
	else
	{
		ft_putnbr_base_add(nb / base_len, c);
		ft_putnbr_base_add(nb % base_len, c);
	}
}

void	ft_putaddr(void *addr)
{
    unsigned long int add;

    add = (unsigned long int)addr;
    ft_putstr("0x");
    ft_putnbr_base_add(add,'x');
}
// int	main(void)
// {
// 	int var1 = 42;
// 	int var2 = 100;
// 	char var3 = 'A';

// 	ft_putaddr(&var1);
// 	ft_putchar('\n');
// 	ft_putaddr(&var2);
// 	ft_putchar('\n');
// 	ft_putaddr(&var3);
// 	ft_putchar('\n');

// 	return (0);
// }