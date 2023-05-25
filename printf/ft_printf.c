/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 23:07:06 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/25 14:54:19 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h> // va_list, va_start, va_arg, va_end
#include <unistd.h>
#include <stdio.h>
// cspdiuxX%

int	function_c(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_verify(va_list args, char c)
{
	if (c == 'c')
	return(function_c(va_arg(args, int)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
    va_list args;

    va_start(args, str);
    int	i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_verify(args, str[i]);
			i++;
		}
		else
		{
		count++;
		function_c(str[i]);		
		i++;
		}
	}
	va_end(args);
	return(count);
}

int	main(void)
{
	int x = ft_printf("char is %c\n", 'A');
	printf("return = %d\n", x);
	return (0);
}