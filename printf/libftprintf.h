/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 23:11:00 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/26 18:24:15 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFPRINTF_H
# define LIBFPRINTF_H

#include <stdio.h>
#include <stdarg.h> // va_list, va_start, va_arg, va_end
#include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);


#endif