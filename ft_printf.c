/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanukya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:32:21 by emanukya          #+#    #+#             */
/*   Updated: 2024/02/05 19:06:58 by emanukya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_str(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_digit((long)(va_arg(ap, int)), 10, specifier);
	else if (specifier == 'x')
		count += print_digit((long)(va_arg(ap, unsigned int)), 16, specifier);
	else if (specifier == 'X')
		count += print_digit((long)(va_arg(ap, unsigned int)), 16, specifier);
	else if (specifier == 'p')
	{
		count += write(1, "0x", 2);
		count += print_pointer((unsigned long long)
				(va_arg(ap, unsigned long long)));
	}
	else if (specifier == 'u')
		count += print_digit((long)(va_arg(ap, unsigned int)), 10, specifier);
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
