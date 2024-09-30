/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:43:20 by mohben-t          #+#    #+#             */
/*   Updated: 2024/09/28 15:43:20 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

void check(va_list list, const char format)
{
	if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(list, int));
	else if (format == 'u')
		ft_putnbr_u(va_arg(list,unsigned int));
	else if (format == 'x')
		ft_putnbr_base(va_arg(list, int), format);
	else if (format == 'X')
		ft_putnbr_base(va_arg(list, int), format);
	else if (format == 's')
		ft_putstr(va_arg(list, char *));
	else if (format == 'p')
		ft_putaddr(va_arg(list, void *));
  	else if (format == 'c')
		ft_putchar((char)va_arg(list, int));
  	else if (format == '%')
		ft_putchar(format);
}

void ft_printf(const char *format, ...)
{
	va_list list;

	va_start(list,format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			check(list,*format);
		}
		else
			ft_putchar(*format);
		format++;
	}
	va_end(list);
}

int main(void)
{
	int x = 5;
	
    ft_printf("This is a test: %d\n", 42);
    ft_printf("Unsigned: %u,  %s\n", 4294967295, "hello");
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello, World!");
    ft_printf("Pointer: %p\n", &x);
    ft_printf("Hex lowercase: %x\n", 255);
    ft_printf("Hex uppercase: %X\n", 255);
    ft_printf("Percent sign: %%\n");
}