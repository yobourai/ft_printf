/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobourai <yobourai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 01:39:09 by yobourai          #+#    #+#             */
/*   Updated: 2024/02/02 04:57:09 by yobourai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_data(char str, va_list ap)
{
	int	count;

	count = 0;
	if (str == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (str == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if ((str == 'd') || (str == 'i'))
		count += ft_putnbr(va_arg(ap, int));
	else if (str == 'u')
		count += ft_putnbr(va_arg(ap, unsigned int));
	else if ((str == 'X') || (str == 'x'))
	{
		count += ft_putnbr_base(va_arg(ap, unsigned int), str);
	}
	else if (str == 'p')
	{
		count = 2;
		write(1, "0x", 2);
		count += ft_putnbr_base(va_arg(ap, unsigned long), str);
	}
	if (str == '%')
		count += ft_putchar(str);
	return (count);
}
