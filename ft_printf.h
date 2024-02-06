/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanukya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:29:20 by emanukya          #+#    #+#             */
/*   Updated: 2024/02/05 16:27:21 by emanukya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int	print_char(int c);
int	print_str(char *str);
int	print_digit(long n, int base, char specifier);
int	ft_printf(const char *format, ...);
int	print_pointer(unsigned long long n);

#endif
