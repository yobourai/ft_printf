/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobourai <yobourai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 03:58:27 by yobourai          #+#    #+#             */
/*   Updated: 2024/02/02 05:17:42 by yobourai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		count;

	if (write(1, "", 0) == -1)
		return (-1);
	i = 0;
	count = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_printf_data(str[i], ap);
		}
		else
			count += write(1, &str[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}

// int main()
// {
//     int d = 1466;
//     int *s= &d;
//     int a  = ft_printf("my ft_printf :\n%p\n", s);
//     ft_printf("my ft_printf ;\n%d", a);
//     int b  = printf("\nprintf :\n%p", s);
//     ft_printf("\nprintf ;%d", a);

//     // printf("\ncounter : \n%d\n",a);
//     // printf("%d\n",b);
// }
