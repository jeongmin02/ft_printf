/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerhee <jerhee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:35:46 by jerhee            #+#    #+#             */
/*   Updated: 2022/08/19 19:02:54 by jerhee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c, va_list ap)
{
	char	c;

	c = (char)va_arg(ap, int);
	write(1, &c, 1);
	return (1);
}

int	print_string(char c, va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	print_num(char c, va_list ap)
{
	int	num;
	int	u_num;

	if (c == 'd' || c == 'i')
	{
		num = va_arg(ap, int);
		ft_putnbr_fd(num, 1);
		return (ft_strlen(num));
	}
	else if (c == 'i')
	{
		u_num = va_arg(ap, unsigned int);
		ft_putnbr_fd(u_num, 1);
		return (ft_strlen(u_num));
	}
	return (0);
}

int	print_hex(char c, va_list ap)
{
	const char	*upper_hex = "0123456789ABCDEF";
	const char	*lower_hex = "0123456789abcdef";

	unsigned long long	p_hex;
	unsigned int		n_hex;

	if (c == 'p')
	{
		p_hex = va_arg(ap, unsigned long long);
		
		return (ft_strlen(p_hex));
	}
	else if (c == 'x' || c == 'X')
	{
		n_hex = va_arg(ap, unsigned int);
		
		return 
	}
}

int	print_percent(char c, va_list ap)
{
	write(1, "%", 1);
	return (1);
}