/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerhee <jerhee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:22:57 by jerhee            #+#    #+#             */
/*   Updated: 2022/08/22 18:44:34 by jerhee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		check_type(char c, va_list ap);
int		ft_printf(const char *format, ...);
int		print_char(char c, va_list ap);
int		print_string(va_list ap);
int		print_num(char c, va_list ap);
int		print_hex(char c, va_list ap);
int		print_percent(char c);
int		ft_strlen(char *s);
int		ft_numlen(long long n);
void	ft_putstr(char *s);
void	ft_putnbr(long long n);
int		ft_putnbr_hex(unsigned long long n, char c);

#endif