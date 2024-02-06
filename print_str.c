/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanukya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:31:09 by emanukya          #+#    #+#             */
/*   Updated: 2024/02/05 14:57:43 by emanukya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
	{
		count += print_str("(null)");
		return (count);
	}
	while (*str != '\0')
	{
		print_char((int)*str);
		str++;
		count++;
	}
	return (count);
}
