/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobourai <yobourai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 03:57:30 by yobourai          #+#    #+#             */
/*   Updated: 2024/02/02 11:27:32 by yobourai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "ft_printf.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>



int	ft_printf(const char *str, ...);
int	ft_printf_data(char str, va_list ap);
int	ft_putstr(char *s);
int	ft_putchar(int c);
int	ft_putnbr_base(unsigned long n, int x);
int	ft_putnbr(long long n);
 
#endif
