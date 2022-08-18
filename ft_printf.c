/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerhee <jerhee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:22:35 by jerhee            #+#    #+#             */
/*   Updated: 2022/08/18 10:58:08 by jerhee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

int	check_car(char *c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u' 
		|| c == 'x' || c == 'X' || c == '%')

	else
		return (0);
}

int ft_printf(const char *format, ...)
{
	int	i;
	int len;

	i = 0;
	len = 0;
	while(format[i])
	{
		if (format[i] == '%')
		{
			if (!check_char(format[i + 1]))
				return (len);
		}
		write(1, &format[i], 1);
		len++;
		i++;
	}
	return (len);
}

