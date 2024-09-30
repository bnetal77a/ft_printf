/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:09:25 by mohben-t          #+#    #+#             */
/*   Updated: 2024/09/28 16:09:25 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr_u(unsigned int nb)
{
	unsigned long	number;

	number = nb;
	if (number <= 9)
		ft_putchar(number + '0');
	else
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
}