/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 23:11:00 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/30 18:05:32 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <stdarg.h> // va_list, va_start, va_arg, va_end
#include <unistd.h>

# define YELLOW "\033[1;33m" // vai negrito tbm
# define RESET "\033[0m" // vai resetar para a cor original
# define ITALIC "\033[3m\033[36m" // vai deixar italico e azul
# define BLUE "\033[0;34m" // vai deixar azul
# define GREEN "\033[32m" // vai deixar verde
# define RED "\033[31m" // vai deixar vermelho
# define CIANO "\033[36m" // vai deixar ciano

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int ft_hex(unsigned int	n, char c);
int	ft_putnbr_u(unsigned int n);
int ft_pointer(unsigned long long p);

#endif