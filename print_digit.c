/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanukya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:31:42 by emanukya          #+#    #+#             */
/*   Updated: 2024/02/05 19:07:31 by emanukya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_digit(long n, int base, char specifier)
{
	int		count;
	char	*symbols;

	count = 0;
	if (specifier == 'x' || specifier == 'd'
		|| specifier == 'i' || specifier == 'u')
		symbols = "0123456789abcdef";
	else if (specifier == 'X')
		symbols = "0123456789ABCDEF";
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit(-n, base, specifier) + 1);
	}
	else if (n < base)
		return (print_char(symbols[n]));
	else
	{
		count = print_digit(n / base, base, specifier);
		return (count + print_digit(n % base, base, specifier));
	}
}
