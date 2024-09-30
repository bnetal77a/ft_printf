/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:09:22 by mohben-t          #+#    #+#             */
/*   Updated: 2024/09/28 16:09:22 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr_base(unsigned int nb, char c)
{
	char *base;
	unsigned int base_len;

	base_len = 16;
	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (nb < base_len)
	{
		ft_putchar(base[nb]);
	}
	else
	{
		ft_putnbr_base(nb / base_len, c);
		ft_putnbr_base(nb % base_len, c);
	}
}