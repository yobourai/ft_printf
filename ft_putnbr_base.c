/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobourai <yobourai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 03:23:26 by yobourai          #+#    #+#             */
/*   Updated: 2024/02/02 07:01:03 by yobourai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long n, int x)
{
	char	*s;
	char	*d;
	int		i;

	s = "0123456789abcdef";
	d = "0123456789ABCDEF";
	i = 0;
	if (x == 'X')
		s = d;
	if (n > 15)
	{
		i += ft_putnbr_base(n / 16, x);
	}
	i += write(1, &s[(n % 16)], 1);
	return (i);
}
// int main()
// {
//     int r= 158;

//     int i = ft_putnbr_base(r, 'x');
//     printf("%x", i);
// }