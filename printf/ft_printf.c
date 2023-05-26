/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvieira <alvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 23:07:06 by alvieira          #+#    #+#             */
/*   Updated: 2023/05/26 18:24:43 by alvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
// cspdiuxX%

static int	ft_verify(va_list args, char c)
{
	if (c == 'c')
	return(ft_putchar(va_arg(args, int)));
	if (c == 's')
		return(ft_putstr(va_arg(args, char *)));
	if (c == 'i' || c == 'd')
		return(ft_putnbr(va_arg(args, int)));
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
		ft_putchar(str[i]);		
		i++;
		}
	}
	va_end(args);
	return(count);
}

int	main(void)
{
	int x = ft_printf("char is %c\n", 'A');
	printf("return = %d\n\n", x);


	char *s = "aline";
	int z = ft_printf("my name is %s\n", s);
	printf("return = %d\n\n", z);

	int n = 800;
	int r = ft_printf("%d\n", n);
	printf("return = %i", r);
	return (0);
}